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
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *labelIp;
    QTextBrowser *textBrowser;
    QLineEdit *lineEditIpsServidor;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonDesconnect;
    QListWidget *listWidgetIps;
    QPushButton *pushButtonUpdate;
    QLabel *labelTiming;
    QSlider *horizontalSliderTimer;
    QLabel *labelTimer;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStop;
    QLabel *labelStatus;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(725, 536);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        labelIp = new QLabel(centralWidget);
        labelIp->setObjectName("labelIp");

        gridLayout->addWidget(labelIp, 0, 0, 1, 1);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName("textBrowser");

        gridLayout->addWidget(textBrowser, 0, 3, 8, 1);

        lineEditIpsServidor = new QLineEdit(centralWidget);
        lineEditIpsServidor->setObjectName("lineEditIpsServidor");

        gridLayout->addWidget(lineEditIpsServidor, 1, 0, 1, 2);

        pushButtonConnect = new QPushButton(centralWidget);
        pushButtonConnect->setObjectName("pushButtonConnect");

        gridLayout->addWidget(pushButtonConnect, 2, 0, 1, 1);

        pushButtonDesconnect = new QPushButton(centralWidget);
        pushButtonDesconnect->setObjectName("pushButtonDesconnect");

        gridLayout->addWidget(pushButtonDesconnect, 2, 1, 1, 1);

        listWidgetIps = new QListWidget(centralWidget);
        listWidgetIps->setObjectName("listWidgetIps");

        gridLayout->addWidget(listWidgetIps, 3, 0, 1, 3);

        pushButtonUpdate = new QPushButton(centralWidget);
        pushButtonUpdate->setObjectName("pushButtonUpdate");

        gridLayout->addWidget(pushButtonUpdate, 4, 1, 1, 1);

        labelTiming = new QLabel(centralWidget);
        labelTiming->setObjectName("labelTiming");

        gridLayout->addWidget(labelTiming, 5, 0, 1, 1);

        horizontalSliderTimer = new QSlider(centralWidget);
        horizontalSliderTimer->setObjectName("horizontalSliderTimer");
        horizontalSliderTimer->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderTimer, 6, 0, 1, 1);

        labelTimer = new QLabel(centralWidget);
        labelTimer->setObjectName("labelTimer");

        gridLayout->addWidget(labelTimer, 6, 2, 1, 1);

        pushButtonStart = new QPushButton(centralWidget);
        pushButtonStart->setObjectName("pushButtonStart");

        gridLayout->addWidget(pushButtonStart, 7, 0, 1, 1);

        pushButtonStop = new QPushButton(centralWidget);
        pushButtonStop->setObjectName("pushButtonStop");

        gridLayout->addWidget(pushButtonStop, 7, 1, 1, 1);

        labelStatus = new QLabel(centralWidget);
        labelStatus->setObjectName("labelStatus");

        gridLayout->addWidget(labelStatus, 8, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 725, 23));
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

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelIp->setText(QCoreApplication::translate("MainWindow", "Ip do servidor", nullptr));
        pushButtonConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButtonDesconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        labelTiming->setText(QCoreApplication::translate("MainWindow", "Timing(s)", nullptr));
        labelTimer->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButtonStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        labelStatus->setText(QCoreApplication::translate("MainWindow", "--------------------", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
