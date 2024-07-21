/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonDesconnect;
    QPushButton *pushButtonConnect;
    QListWidget *listWidgetIps;
    QLabel *labelIp;
    QLineEdit *lineEditIpsServidor;
    QPushButton *pushButtonUpdate;
    QGridLayout *gridLayout;
    QLabel *labelTiming;
    QSlider *horizontalSliderTimer;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStop;
    QLabel *labelStatus;
    QLabel *labelTimer;
    Plotter *widgetGrafico;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(876, 554);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName("gridLayout_2");
        pushButtonDesconnect = new QPushButton(centralWidget);
        pushButtonDesconnect->setObjectName("pushButtonDesconnect");

        gridLayout_2->addWidget(pushButtonDesconnect, 2, 1, 1, 1);

        pushButtonConnect = new QPushButton(centralWidget);
        pushButtonConnect->setObjectName("pushButtonConnect");

        gridLayout_2->addWidget(pushButtonConnect, 2, 0, 1, 1);

        listWidgetIps = new QListWidget(centralWidget);
        listWidgetIps->setObjectName("listWidgetIps");

        gridLayout_2->addWidget(listWidgetIps, 3, 0, 1, 2);

        labelIp = new QLabel(centralWidget);
        labelIp->setObjectName("labelIp");

        gridLayout_2->addWidget(labelIp, 0, 0, 1, 1);

        lineEditIpsServidor = new QLineEdit(centralWidget);
        lineEditIpsServidor->setObjectName("lineEditIpsServidor");

        gridLayout_2->addWidget(lineEditIpsServidor, 1, 0, 1, 2);

        pushButtonUpdate = new QPushButton(centralWidget);
        pushButtonUpdate->setObjectName("pushButtonUpdate");

        gridLayout_2->addWidget(pushButtonUpdate, 4, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        labelTiming = new QLabel(centralWidget);
        labelTiming->setObjectName("labelTiming");

        gridLayout->addWidget(labelTiming, 0, 0, 1, 1);

        horizontalSliderTimer = new QSlider(centralWidget);
        horizontalSliderTimer->setObjectName("horizontalSliderTimer");
        horizontalSliderTimer->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderTimer, 1, 0, 1, 2);

        pushButtonStart = new QPushButton(centralWidget);
        pushButtonStart->setObjectName("pushButtonStart");

        gridLayout->addWidget(pushButtonStart, 2, 0, 1, 1);

        pushButtonStop = new QPushButton(centralWidget);
        pushButtonStop->setObjectName("pushButtonStop");

        gridLayout->addWidget(pushButtonStop, 2, 1, 1, 1);

        labelStatus = new QLabel(centralWidget);
        labelStatus->setObjectName("labelStatus");

        gridLayout->addWidget(labelStatus, 3, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 0, 1, 1);

        labelTimer = new QLabel(centralWidget);
        labelTimer->setObjectName("labelTimer");

        gridLayout_3->addWidget(labelTimer, 1, 1, 1, 1);

        widgetGrafico = new Plotter(centralWidget);
        widgetGrafico->setObjectName("widgetGrafico");

        gridLayout_3->addWidget(widgetGrafico, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 876, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButtonConnect, SIGNAL(clicked()), MainWindow, SLOT(tcpConnect()));
        QObject::connect(pushButtonDesconnect, SIGNAL(clicked()), MainWindow, SLOT(tcpDisconnect()));
        QObject::connect(horizontalSliderTimer, &QSlider::valueChanged, labelTimer, qOverload<int>(&QLabel::setNum));
        QObject::connect(pushButtonUpdate, SIGNAL(clicked()), MainWindow, SLOT(getConnecetIps()));
        QObject::connect(listWidgetIps, SIGNAL(itemClicked(QListWidgetItem*)), MainWindow, SLOT(ipAtual()));
        QObject::connect(pushButtonStop, SIGNAL(clicked()), MainWindow, SLOT(stopTempo()));
        QObject::connect(pushButtonStart, SIGNAL(clicked()), MainWindow, SLOT(startTempo()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonDesconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        pushButtonConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        labelIp->setText(QCoreApplication::translate("MainWindow", "Ip do servidor", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        labelTiming->setText(QCoreApplication::translate("MainWindow", "Timing(s)", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButtonStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        labelStatus->setText(QCoreApplication::translate("MainWindow", "--------------------", nullptr));
        labelTimer->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
