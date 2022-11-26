#include "qt_recon2.h"
#include "extractor_api.h"
#include <QMessageBox>
#include <QFileDialog>
#include <string>
#include <tchar.h>
#define IMG_PATH_ERROR 0
#define SCENE_PATH_ERROR 1
#define SAMPLE_LEN_ERROR 2
#define RECON_DONE       3
#define MSG_FROM_RECON   4
#define SCALE_ERROR 5
#define MAX_PIXELS1  3000000
#define MAX_PIXELS2  6000000
qt_recon2* pMainWnd = NULL;

void On3DProgress(int total_progress, int sub_progress, char* msg) {

	emit(pMainWnd->progressReady(total_progress, sub_progress, msg));
}

qt_recon2::qt_recon2(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.setupUi(this);
	connect(ui.RunBtn, SIGNAL(clicked()), this, SLOT(onBtnRunClick()));
	connect(ui.image_path_btn, SIGNAL(clicked()), this, SLOT(onBtnImagePath()));
	connect(ui.scene_path_btn, SIGNAL(clicked()), this, SLOT(onBtnScenePath()));
	connect(ui.open_model_btn, SIGNAL(clicked()), this, SLOT(onOpenModelClick()));
	connect(ui.akaze_check, SIGNAL(clicked()), this, SLOT(onAkazeCheck()));
	connect(ui.sift_check, SIGNAL(clicked()), this, SLOT(onSiftCheck()));
	connect(ui.akaze_sift_check, SIGNAL(clicked()), this, SLOT(onAkaze_SiftCheck()));
	connect(ui.mvs_check, SIGNAL(clicked()), this, SLOT(onMvsCheck()));
	connect(ui.smvs_check, SIGNAL(clicked()), this, SLOT(onSMvsCheck()));
	connect(ui.seperate_recon_check, SIGNAL(clicked()), this, SLOT(onSeperateRecon()));
	connect(this, &qt_recon2::progressReady, this, &qt_recon2::setProgress);
	connect(ui.default_setting_check, SIGNAL(clicked()), this, SLOT(onDefaultCheck()));
	connect(ui.scene_btn, SIGNAL(clicked()), this, SLOT(onMakeSceneBtn()));
	connect(ui.sfm_btn, SIGNAL(clicked()), this, SLOT(onSfmReconBtn()));
	connect(ui.dm_btn, SIGNAL(clicked()), this, SLOT(onDmReconBtn()));
	connect(ui.fss_btn, SIGNAL(clicked()), this, SLOT(onFssReconBtn()));
	connect(ui.tex_btn, SIGNAL(clicked()), this, SLOT(onTexReconBtn()));
	connect(ui.tex_scale_btn, SIGNAL(clicked()), this, SLOT(onScalingTexMesh()));
	ui.img_path_label->setVisible(false);
	ui.scene_path_label->setVisible(false);
}

qt_recon2::~qt_recon2()
{

}

void qt_recon2::onAkazeCheck()
{
	ui.sift_check->setChecked(false);
	ui.akaze_sift_check->setChecked(false);
}

void qt_recon2::onSiftCheck()
{
	ui.akaze_check->setChecked(false);
	ui.akaze_sift_check->setChecked(false);
}

void qt_recon2::onAkaze_SiftCheck()
{
	ui.sift_check->setChecked(false);
	ui.akaze_check->setChecked(false);
}

void qt_recon2::onMvsCheck()
{
	ui.smvs_check->setChecked(false);
}

void qt_recon2::onSMvsCheck()
{
	ui.mvs_check->setChecked(false);
}

void qt_recon2::onReconFinished()
{
	QString tmp("alert");
	QMessageBox::warning(this, tmp, QString::fromStdString("Reconstruction is finished."), tr("OK"));
}

void qt_recon2::onSeperateRecon()
{
	if (ui.seperate_recon_check->isChecked())
	{
		ui.dm_btn->setDisabled(false);
		ui.sfm_btn->setDisabled(false);
		ui.fss_btn->setDisabled(false);
		ui.scene_btn->setDisabled(false);
		ui.tex_btn->setDisabled(false);
		ui.RunBtn->setDisabled(true);
		initReconSetting();
	}
	else
	{
		ui.RunBtn->setDisabled(false);
		ui.dm_btn->setDisabled(true);
		ui.sfm_btn->setDisabled(true);
		ui.fss_btn->setDisabled(true);
		ui.scene_btn->setDisabled(true);
		ui.tex_btn->setDisabled(true);
	}
}

void qt_recon2::setProgress(int total, int sub, char* msg)
{
	QString qstr;
	qstr.fromLocal8Bit(msg);
	ui.progressBar_total->setValue(total);
	ui.progressBar_sub->setValue(sub);
}

void qt_recon2::onDefaultCheck()
{
	if (ui.default_setting_check->isChecked())
	{
		setDefault();
	}
	else
	{
		ui.akaze_check->setDisabled(false);
		ui.akaze_sift_check->setDisabled(false);
		//dm mode
		ui.mvs_check->setDisabled(false);
		ui.smvs_check->setDisabled(false);
		ui.use_shade_check->setDisabled(false);
		//image size, dm input scale, dm out scale
		ui.img_size_spin->setDisabled(false);
		ui.input_scale_spin->setDisabled(false);
		ui.out_scale_spin->setDisabled(false);
	}
}

void qt_recon2::onMakeSceneBtn()
{
	make_scene();
}

void qt_recon2::onSfmReconBtn()
{
	sfm_recon();
}

void qt_recon2::onDmReconBtn()
{
	int mvsType = 0;
	if (ui.mvs_check->isChecked() == true)//.mvs_check->isChecked() == true)
		mvsType = 0;
	if (ui.smvs_check->isChecked() == true)
		mvsType = 1;
	dm_recon(mvsType);
}

void qt_recon2::onFssReconBtn()
{
	fss_recon();
}

void qt_recon2::onTexReconBtn()
{
	QString dirScene = ui.scene_path_label->text();
	if (dirScene == "") {
		QString tmp("alert");
		QMessageBox::warning(this, tmp, QString::fromStdString("Scene path is not set. Please set the scene path."), tr("OK"));
		return;
	}
	std::string scene_path = dirScene.toUtf8().constData();
	tex_recon(scene_path, 0.0f);
}

void qt_recon2::onScalingTexMesh()
{
	float scale = getScale();
	if (scale == 0.0f)
	{
		QString tmp("alert");
		QMessageBox::warning(this, tmp, QString::fromStdString("scale is not specified. you must specify it"), tr("OK"));
		return;
	}
	QString dirScene = ui.scene_path_label->text();
	if (dirScene == "") {
		QString tmp("alert");
		QMessageBox::warning(this, tmp, QString::fromStdString("Scene path is not set. Please set the scene path."), tr("OK"));
		return;
	}
	std::string scene_path = dirScene.toUtf8().constData();
	tex_recon(scene_path, scale);
	QMessageBox::warning(this, QString::fromStdString("scaling tex mesh."), QString::fromStdString("scaling tex mesh is done."), tr("ok"));
}

void qt_recon2::onBtnRunClick()
{
	QString dirImage = ui.img_path_label->text();
	QString dirScene = ui.scene_path_label->text();
	QString tmp("alert");
	if (dirImage == "") {
		QMessageBox::warning(this, tmp, QString::fromStdString("Please input image path."), tr("OK"));
		return;
	}
	if (dirScene == "") {
		QMessageBox::warning(this, tmp, QString::fromStdString("Please input scene path."), tr("OK"));
		return;
	}
	std::string strImagePath = dirImage.toUtf8().constData();
	std::string strScenePath = dirScene.toUtf8().constData();
	int matchMode = 3;//0:cv_akaze plus cv_sift feature matching, 1:cv_akaze feature matching, 2:cv_sift feature matching, 3:mve feature matching
	int mvsType = 1;//0:mvs, 1:smvs
	if (ui.sift_check->isChecked() == true)
		matchMode = 3;
	if (ui.akaze_check->isChecked() == true)
		matchMode = 1;
	if (ui.akaze_sift_check->isChecked() == true)
		matchMode = 0;
	if (ui.mvs_check->isChecked() == true)//.mvs_check->isChecked() == true)
		mvsType = 0;
	if (ui.smvs_check->isChecked() == true)
		mvsType = 1;
	int img_size_level = ui.img_size_spin->value();
	int dm_input_scale = ui.input_scale_spin->value();
	int dm_out_scale = ui.out_scale_spin->value();
	QString str = ui.plane_tolerance_edt->text();
	float plane_tolerance = str.toFloat();
	if (ui.plane_remove_check->isChecked() == false)
		plane_tolerance = 0.0f;
	float cluster_tolerance = 0.0f;
	bool use_shading = ui.use_shade_check->isChecked();
	init_recon(strImagePath, strScenePath, matchMode, mvsType, img_size_level, dm_input_scale, dm_out_scale, use_shading,
		plane_tolerance, cluster_tolerance, (On3DProgressCallback)On3DProgress);
	ui.RunBtn->setEnabled(false);
	WorkerThread *reconn_thread = new WorkerThread(strImagePath, strScenePath, matchMode, mvsType);
	connect(reconn_thread, &WorkerThread::resultReady, this, &qt_recon2::onReconFinished);
	reconn_thread->start();
}

void qt_recon2::onBtnImagePath()
{
	QString dirImage = QFileDialog::getExistingDirectory(this, tr("Image Directory"),
		"3d_construct/",
		QFileDialog::ShowDirsOnly
		| QFileDialog::DontResolveSymlinks);
	ui.image_path_btn->setVisible(true);
	ui.img_path_label->setText(dirImage);
}

void qt_recon2::onBtnScenePath()
{
	QString dirScene = QFileDialog::getExistingDirectory(this, tr("Scene Directory"),
		"3d_construct/",
		QFileDialog::ShowDirsOnly
		| QFileDialog::DontResolveSymlinks);
	ui.scene_path_label->setVisible(true);
	ui.scene_path_label->setText(dirScene);
}

void qt_recon2::onOpenModelClick()
{
	QString dirScene = ui.scene_path_label->text();
	if (dirScene == "")
	{
		QString tmp("alert");
		QMessageBox::warning(this, tmp, QString::fromStdString("Scene path is not set. Please set the scene path."), tr("OK"));
		return;
	}
	std::string strScenePath = dirScene.toUtf8().constData();
	std::string scaled_path = strScenePath + "/mesh_scaled.ply";
	std::string decimate_path = strScenePath + "/mesh_decimated.ply";
	float sample_len = 50.0f;
	setting(sample_len, scaled_path, decimate_path);
	int nRes = loadScene(strScenePath);
	switch (nRes)
	{
	case 0:
		return;
	case 1:
		return;
	}
	QString fileName = QFileDialog::getOpenFileName(this, tr("Open Model"), "", tr("model File (*.ply)"));
	if (fileName == "")
		return;
	loadMesh(fileName.toStdString());
	std::string caption = "viewer";
	createViewer(10, 10, 1280, 960, caption);
	drawScene(1);
}

bool qt_recon2::initReconSetting()
{
	QString dirImage = ui.img_path_label->text();
	QString dirScene = ui.scene_path_label->text();
	QString tmp("alert");
	if (dirImage == "") {
		QString tmp("alert");
		QMessageBox::warning(this, tmp, QString::fromStdString("image path is not set. Please set the image path."), tr("OK"));
		return false;
	}
	if (dirScene == "") {
		QString tmp("alert");
		QMessageBox::warning(this, tmp, QString::fromStdString("scene path is not set. Please set the scene path."), tr("OK"));
		return false;
	}
	std::string strImagePath = dirImage.toUtf8().constData();
	std::string strScenePath = dirScene.toUtf8().constData();
	int matchMode = 3;//0:cv_akaze plus cv_sift feature matching, 1:cv_akaze feature matching, 2:cv_sift feature matching, 3:mve feature matching
	int mvsType = 1;//0:mvs, 1:smvs
	
	if (ui.sift_check->isChecked() == true)
		matchMode = 3;
	if (ui.akaze_check->isChecked() == true)
		matchMode = 1;
	if (ui.akaze_sift_check->isChecked() == true)
		matchMode = 0;
	if (ui.mvs_check->isChecked() == true)//.mvs_check->isChecked() == true)
		mvsType = 0;
	if (ui.smvs_check->isChecked() == true)
		mvsType = 1;
	int img_size_level = ui.img_size_spin->value();
	int dm_input_scale = ui.input_scale_spin->value();
	int dm_out_scale = ui.out_scale_spin->value();
	QString str = ui.plane_tolerance_edt->text();
	float plane_tolerance = str.toFloat();
	if (ui.plane_remove_check->isChecked() == false)
		plane_tolerance = 0.0f;
	float cluster_tolerance = 0.0f;
	bool use_shading = ui.use_shade_check->isChecked();
	init_recon(strImagePath, strScenePath, matchMode, mvsType, img_size_level, dm_input_scale, dm_out_scale, use_shading,
		plane_tolerance, cluster_tolerance, (On3DProgressCallback)On3DProgress);
	return true;
}

void qt_recon2::setDefault()
{
	ui.default_setting_check->setChecked(true);
	//feature setting
	ui.akaze_check->setChecked(false);
	ui.akaze_check->setDisabled(true);
	ui.akaze_sift_check->setChecked(false);
	ui.akaze_sift_check->setDisabled(true);
	ui.sift_check->setChecked(true);
	//dm mode
	ui.mvs_check->setChecked(false);
	ui.mvs_check->setDisabled(true);
	ui.smvs_check->setChecked(true);
	ui.smvs_check->setDisabled(true);
	ui.use_shade_check->setChecked(false);
	ui.use_shade_check->setDisabled(true);
	//image size, dm input scale, dm out scale
	ui.img_size_spin->setValue(2);
	ui.img_size_spin->setDisabled(true);
	ui.input_scale_spin->setValue(3);
	ui.input_scale_spin->setDisabled(true);
	ui.out_scale_spin->setValue(3);
	ui.out_scale_spin->setDisabled(true);
	//step buttons should be disable
	ui.dm_btn->setDisabled(true);
	ui.sfm_btn->setDisabled(true);
	ui.fss_btn->setDisabled(true);
	ui.scene_btn->setDisabled(true);
	ui.tex_btn->setDisabled(true);
}