/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_open;
    QPushButton *pushButton_1cold;
    QPushButton *pushButton_2worm;
    QPushButton *pushButton_3light;
    QPushButton *pushButton_4grey;
    QPushButton *pushButton_5saturation;
    QPushButton *pushButton_6blur;
    QPushButton *pushButton_7sharpen;
    QSlider *horizontalSlider;
    QLabel *label;
    QGraphicsView *ImageGraphic;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 720);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 95, 275));
        verticalLayout = new QVBoxLayout(horizontalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_open = new QPushButton(horizontalLayoutWidget);
        pushButton_open->setObjectName(QString::fromUtf8("pushButton_open"));

        verticalLayout->addWidget(pushButton_open);

        pushButton_1cold = new QPushButton(horizontalLayoutWidget);
        pushButton_1cold->setObjectName(QString::fromUtf8("pushButton_1cold"));

        verticalLayout->addWidget(pushButton_1cold);

        pushButton_2worm = new QPushButton(horizontalLayoutWidget);
        pushButton_2worm->setObjectName(QString::fromUtf8("pushButton_2worm"));

        verticalLayout->addWidget(pushButton_2worm);

        pushButton_3light = new QPushButton(horizontalLayoutWidget);
        pushButton_3light->setObjectName(QString::fromUtf8("pushButton_3light"));

        verticalLayout->addWidget(pushButton_3light);

        pushButton_4grey = new QPushButton(horizontalLayoutWidget);
        pushButton_4grey->setObjectName(QString::fromUtf8("pushButton_4grey"));

        verticalLayout->addWidget(pushButton_4grey);

        pushButton_5saturation = new QPushButton(horizontalLayoutWidget);
        pushButton_5saturation->setObjectName(QString::fromUtf8("pushButton_5saturation"));

        verticalLayout->addWidget(pushButton_5saturation);

        pushButton_6blur = new QPushButton(horizontalLayoutWidget);
        pushButton_6blur->setObjectName(QString::fromUtf8("pushButton_6blur"));

        verticalLayout->addWidget(pushButton_6blur);

        pushButton_7sharpen = new QPushButton(horizontalLayoutWidget);
        pushButton_7sharpen->setObjectName(QString::fromUtf8("pushButton_7sharpen"));

        verticalLayout->addWidget(pushButton_7sharpen);

        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(110, 0, 160, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 290, 101, 371));
        QFont font;
        font.setPointSize(40);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/image/debug_screenbg);"));
        label->setAlignment(Qt::AlignCenter);
        ImageGraphic = new QGraphicsView(centralWidget);
        ImageGraphic->setObjectName(QString::fromUtf8("ImageGraphic"));
        ImageGraphic->setGeometry(QRect(110, 40, 1131, 621));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ImageGraphic->sizePolicy().hasHeightForWidth());
        ImageGraphic->setSizePolicy(sizePolicy);
        ImageGraphic->setStyleSheet(QString::fromUtf8("border-image: url(:/image/debug_screenbg);"));
        ImageGraphic->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        ImageGraphic->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        ImageGraphic->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1280, 26));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        pushButton_1cold->setText(QCoreApplication::translate("MainWindow", "\345\206\267\350\211\262", nullptr));
        pushButton_2worm->setText(QCoreApplication::translate("MainWindow", "\346\232\226\350\211\262", nullptr));
        pushButton_3light->setText(QCoreApplication::translate("MainWindow", "\344\272\256\345\272\246", nullptr));
        pushButton_4grey->setText(QCoreApplication::translate("MainWindow", "\347\201\260\345\272\246", nullptr));
        pushButton_5saturation->setText(QCoreApplication::translate("MainWindow", "\351\245\261\345\222\214", nullptr));
        pushButton_6blur->setText(QCoreApplication::translate("MainWindow", "\346\250\241\347\263\212", nullptr));
        pushButton_7sharpen->setText(QCoreApplication::translate("MainWindow", "\351\224\220\345\214\226", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
