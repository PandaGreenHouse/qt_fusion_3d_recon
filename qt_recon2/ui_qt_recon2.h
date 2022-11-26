/********************************************************************************
** Form generated from reading UI file 'qt_recon2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_RECON2_H
#define UI_QT_RECON2_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qt_recon2Class
{
public:
    QWidget *centralWidget;
    QLabel *img_path_label;
    QLabel *scene_path_label;
    QSpinBox *input_scale_spin;
    QSpinBox *out_scale_spin;
    QLineEdit *sample_len_edt;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label;
    QSpinBox *img_size_spin;
    QPushButton *open_model_btn;
    QPushButton *RunBtn;
    QProgressBar *progressBar_sub;
    QProgressBar *progressBar_total;
    QCheckBox *mvs_check;
    QLabel *label_3;
    QCheckBox *sift_check;
    QCheckBox *plane_remove_check;
    QCheckBox *smvs_check;
    QCheckBox *akaze_sift_check;
    QLineEdit *plane_tolerance_edt;
    QCheckBox *akaze_check;
    QCheckBox *default_setting_check;
    QCheckBox *seperate_recon_check;
    QCheckBox *use_shade_check;
    QPushButton *scene_btn;
    QPushButton *sfm_btn;
    QPushButton *tex_btn;
    QPushButton *dm_btn;
    QPushButton *fss_btn;
    QPushButton *openModelBtn;
    QPushButton *tex_scale_btn;
    QPushButton *image_path_btn;
    QPushButton *scene_path_btn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *qt_recon2Class)
    {
        if (qt_recon2Class->objectName().isEmpty())
            qt_recon2Class->setObjectName(QString::fromUtf8("qt_recon2Class"));
        qt_recon2Class->resize(764, 634);
        centralWidget = new QWidget(qt_recon2Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        img_path_label = new QLabel(centralWidget);
        img_path_label->setObjectName(QString::fromUtf8("img_path_label"));
        img_path_label->setGeometry(QRect(180, 40, 271, 16));
        scene_path_label = new QLabel(centralWidget);
        scene_path_label->setObjectName(QString::fromUtf8("scene_path_label"));
        scene_path_label->setGeometry(QRect(180, 80, 291, 16));
        input_scale_spin = new QSpinBox(centralWidget);
        input_scale_spin->setObjectName(QString::fromUtf8("input_scale_spin"));
        input_scale_spin->setGeometry(QRect(123, 150, 33, 24));
        input_scale_spin->setMinimum(0);
        input_scale_spin->setMaximum(3);
        input_scale_spin->setSingleStep(1);
        input_scale_spin->setDisplayIntegerBase(10);
        out_scale_spin = new QSpinBox(centralWidget);
        out_scale_spin->setObjectName(QString::fromUtf8("out_scale_spin"));
        out_scale_spin->setGeometry(QRect(340, 150, 33, 24));
        out_scale_spin->setMinimum(0);
        out_scale_spin->setMaximum(3);
        out_scale_spin->setSingleStep(1);
        out_scale_spin->setValue(1);
        out_scale_spin->setDisplayIntegerBase(10);
        sample_len_edt = new QLineEdit(centralWidget);
        sample_len_edt->setObjectName(QString::fromUtf8("sample_len_edt"));
        sample_len_edt->setGeometry(QRect(240, 320, 132, 24));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 150, 71, 26));
        label_5->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(157, 320, 76, 24));
        label_4->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 150, 64, 24));
        label_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 150, 54, 24));
        label->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        img_size_spin = new QSpinBox(centralWidget);
        img_size_spin->setObjectName(QString::fromUtf8("img_size_spin"));
        img_size_spin->setGeometry(QRect(240, 151, 33, 24));
        img_size_spin->setMinimum(1);
        img_size_spin->setMaximum(2);
        open_model_btn = new QPushButton(centralWidget);
        open_model_btn->setObjectName(QString::fromUtf8("open_model_btn"));
        open_model_btn->setGeometry(QRect(30, 320, 100, 28));
        RunBtn = new QPushButton(centralWidget);
        RunBtn->setObjectName(QString::fromUtf8("RunBtn"));
        RunBtn->setGeometry(QRect(30, 270, 100, 28));
        progressBar_sub = new QProgressBar(centralWidget);
        progressBar_sub->setObjectName(QString::fromUtf8("progressBar_sub"));
        progressBar_sub->setGeometry(QRect(30, 390, 701, 23));
        progressBar_sub->setValue(0);
        progressBar_total = new QProgressBar(centralWidget);
        progressBar_total->setObjectName(QString::fromUtf8("progressBar_total"));
        progressBar_total->setGeometry(QRect(30, 360, 701, 23));
        progressBar_total->setValue(0);
        mvs_check = new QCheckBox(centralWidget);
        mvs_check->setObjectName(QString::fromUtf8("mvs_check"));
        mvs_check->setGeometry(QRect(209, 112, 50, 20));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(439, 110, 64, 24));
        label_3->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        sift_check = new QCheckBox(centralWidget);
        sift_check->setObjectName(QString::fromUtf8("sift_check"));
        sift_check->setGeometry(QRect(111, 112, 44, 20));
        plane_remove_check = new QCheckBox(centralWidget);
        plane_remove_check->setObjectName(QString::fromUtf8("plane_remove_check"));
        plane_remove_check->setGeometry(QRect(329, 112, 103, 20));
        smvs_check = new QCheckBox(centralWidget);
        smvs_check->setObjectName(QString::fromUtf8("smvs_check"));
        smvs_check->setGeometry(QRect(266, 112, 56, 20));
        akaze_sift_check = new QCheckBox(centralWidget);
        akaze_sift_check->setObjectName(QString::fromUtf8("akaze_sift_check"));
        akaze_sift_check->setGeometry(QRect(162, 112, 40, 20));
        plane_tolerance_edt = new QLineEdit(centralWidget);
        plane_tolerance_edt->setObjectName(QString::fromUtf8("plane_tolerance_edt"));
        plane_tolerance_edt->setGeometry(QRect(510, 110, 101, 24));
        akaze_check = new QCheckBox(centralWidget);
        akaze_check->setObjectName(QString::fromUtf8("akaze_check"));
        akaze_check->setGeometry(QRect(44, 112, 60, 20));
        default_setting_check = new QCheckBox(centralWidget);
        default_setting_check->setObjectName(QString::fromUtf8("default_setting_check"));
        default_setting_check->setGeometry(QRect(32, 190, 111, 20));
        seperate_recon_check = new QCheckBox(centralWidget);
        seperate_recon_check->setObjectName(QString::fromUtf8("seperate_recon_check"));
        seperate_recon_check->setGeometry(QRect(150, 190, 92, 20));
        use_shade_check = new QCheckBox(centralWidget);
        use_shade_check->setObjectName(QString::fromUtf8("use_shade_check"));
        use_shade_check->setGeometry(QRect(679, 638, 81, 20));
        scene_btn = new QPushButton(centralWidget);
        scene_btn->setObjectName(QString::fromUtf8("scene_btn"));
        scene_btn->setGeometry(QRect(30, 230, 93, 28));
        sfm_btn = new QPushButton(centralWidget);
        sfm_btn->setObjectName(QString::fromUtf8("sfm_btn"));
        sfm_btn->setGeometry(QRect(130, 230, 93, 28));
        tex_btn = new QPushButton(centralWidget);
        tex_btn->setObjectName(QString::fromUtf8("tex_btn"));
        tex_btn->setGeometry(QRect(430, 230, 93, 28));
        dm_btn = new QPushButton(centralWidget);
        dm_btn->setObjectName(QString::fromUtf8("dm_btn"));
        dm_btn->setGeometry(QRect(230, 230, 93, 28));
        fss_btn = new QPushButton(centralWidget);
        fss_btn->setObjectName(QString::fromUtf8("fss_btn"));
        fss_btn->setGeometry(QRect(330, 230, 93, 28));
        openModelBtn = new QPushButton(centralWidget);
        openModelBtn->setObjectName(QString::fromUtf8("openModelBtn"));
        openModelBtn->setGeometry(QRect(155, 271, 97, 28));
        tex_scale_btn = new QPushButton(centralWidget);
        tex_scale_btn->setObjectName(QString::fromUtf8("tex_scale_btn"));
        tex_scale_btn->setGeometry(QRect(270, 270, 121, 28));
        image_path_btn = new QPushButton(centralWidget);
        image_path_btn->setObjectName(QString::fromUtf8("image_path_btn"));
        image_path_btn->setGeometry(QRect(40, 30, 94, 28));
        scene_path_btn = new QPushButton(centralWidget);
        scene_path_btn->setObjectName(QString::fromUtf8("scene_path_btn"));
        scene_path_btn->setGeometry(QRect(40, 70, 93, 28));
        qt_recon2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(qt_recon2Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 764, 26));
        qt_recon2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(qt_recon2Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        qt_recon2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(qt_recon2Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        qt_recon2Class->setStatusBar(statusBar);

        retranslateUi(qt_recon2Class);

        QMetaObject::connectSlotsByName(qt_recon2Class);
    } // setupUi

    void retranslateUi(QMainWindow *qt_recon2Class)
    {
        qt_recon2Class->setWindowTitle(QApplication::translate("qt_recon2Class", "qt_recon2", nullptr));
        img_path_label->setText(QApplication::translate("qt_recon2Class", "img_path", nullptr));
        scene_path_label->setText(QApplication::translate("qt_recon2Class", "TextLabel", nullptr));
        label_5->setText(QApplication::translate("qt_recon2Class", "image_scale", nullptr));
        label_4->setText(QApplication::translate("qt_recon2Class", "sample_lenth", nullptr));
        label_2->setText(QApplication::translate("qt_recon2Class", "input_scale", nullptr));
        label->setText(QApplication::translate("qt_recon2Class", "out_scale", nullptr));
        open_model_btn->setText(QApplication::translate("qt_recon2Class", "OpenModel", nullptr));
        RunBtn->setText(QApplication::translate("qt_recon2Class", "entire_recon", nullptr));
        mvs_check->setText(QApplication::translate("qt_recon2Class", "mvs", nullptr));
        label_3->setText(QApplication::translate("qt_recon2Class", "plane_thick", nullptr));
        sift_check->setText(QApplication::translate("qt_recon2Class", "sift", nullptr));
        plane_remove_check->setText(QApplication::translate("qt_recon2Class", "remove_floor", nullptr));
        smvs_check->setText(QApplication::translate("qt_recon2Class", "smvs", nullptr));
        akaze_sift_check->setText(QApplication::translate("qt_recon2Class", "all", nullptr));
        akaze_check->setText(QApplication::translate("qt_recon2Class", "akaze", nullptr));
        default_setting_check->setText(QApplication::translate("qt_recon2Class", "default_setting", nullptr));
        seperate_recon_check->setText(QApplication::translate("qt_recon2Class", "step_recon", nullptr));
        use_shade_check->setText(QApplication::translate("qt_recon2Class", "shading", nullptr));
        scene_btn->setText(QApplication::translate("qt_recon2Class", "make_scene", nullptr));
        sfm_btn->setText(QApplication::translate("qt_recon2Class", "sfm", nullptr));
        tex_btn->setText(QApplication::translate("qt_recon2Class", "tex_recon", nullptr));
        dm_btn->setText(QApplication::translate("qt_recon2Class", "depth_recon", nullptr));
        fss_btn->setText(QApplication::translate("qt_recon2Class", "surface_recon", nullptr));
        openModelBtn->setText(QApplication::translate("qt_recon2Class", "scaling_model", nullptr));
        tex_scale_btn->setText(QApplication::translate("qt_recon2Class", "scaling_tex_mesh", nullptr));
        image_path_btn->setText(QApplication::translate("qt_recon2Class", "image_set_path", nullptr));
        scene_path_btn->setText(QApplication::translate("qt_recon2Class", "scene_path", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qt_recon2Class: public Ui_qt_recon2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_RECON2_H
