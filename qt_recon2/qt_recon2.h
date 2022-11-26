#ifndef QT_RECON2_H
#define QT_RECON2_H

#include <QtWidgets/QMainWindow>
#include "ui_qt_recon2.h"
#include <qthread.h>
#include <Recon_API.h>

void On3DProgress(int total_progress, int sub_progress, char* msg);

class WorkerThread : public QThread
{
private:
	std::string m_strImagePath;
	std::string m_strScenePath;
	int m_nMatchType, m_nMvsType;
public:
	WorkerThread(std::string &imgPath, std::string &scenePath, int matchType, int mvsType) {
		m_strImagePath = imgPath;
		m_strScenePath = scenePath;
		m_nMatchType = matchType;
		m_nMvsType = mvsType;
	}

	Q_OBJECT
		void run() override {
		QString result;
		/* ... here is the expensive or blocking operation ... */
		recon_all(m_strImagePath, m_strScenePath, m_nMatchType, m_nMvsType);
		emit resultReady();
	}
signals:
	void resultReady();
};

class qt_recon2 : public QMainWindow
{
	Q_OBJECT

public:
	qt_recon2(QWidget *parent = 0);
	~qt_recon2();

private:
	Ui::qt_recon2Class ui;
	QString plyFileName;
	bool initReconSetting();
	void setDefault();
public slots:
	void onBtnRunClick();
	void onBtnImagePath();
	void onBtnScenePath();
	void onOpenModelClick();
	void onAkazeCheck();
	void onSiftCheck();
	void onAkaze_SiftCheck();
	void onMvsCheck();
	void onSMvsCheck();
	void onReconFinished();
	void onSeperateRecon();
	void setProgress(int total, int sub, char* msg);
	void onDefaultCheck();
	void onMakeSceneBtn();
	void onSfmReconBtn();
	void onDmReconBtn();
	void onFssReconBtn();
	void onTexReconBtn();
	void onScalingTexMesh();
signals:
	void progressReady(int total, int sub, char* msg);
};

#endif // QT_RECON2_H
