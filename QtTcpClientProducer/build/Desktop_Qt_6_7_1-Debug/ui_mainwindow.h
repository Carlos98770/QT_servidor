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
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStart_2;
    QSlider *horizontalSliderTempo;
    QTextBrowser *textBrowserSets;
    QLabel *labelT;
    QLabel *labelValorTempo;
    QSlider *horizontalSliderMaximo;
    QSlider *horizontalSliderMinino;
    QLCDNumber *lcdNumberMinino;
    QLCDNumber *lcdNumberMaximo;
    QLabel *labelMinimo;
    QLabel *labelMaximo;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonDisconnect;
    QLabel *labelConnect;
    QLineEdit *lineEditIps;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(679, 438);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        pushButtonStart = new QPushButton(centralWidget);
        pushButtonStart->setObjectName("pushButtonStart");
        pushButtonStart->setGeometry(QRect(40, 320, 131, 31));
        pushButtonStart_2 = new QPushButton(centralWidget);
        pushButtonStart_2->setObjectName("pushButtonStart_2");
        pushButtonStart_2->setGeometry(QRect(180, 320, 131, 31));
        horizontalSliderTempo = new QSlider(centralWidget);
        horizontalSliderTempo->setObjectName("horizontalSliderTempo");
        horizontalSliderTempo->setGeometry(QRect(120, 260, 161, 21));
        horizontalSliderTempo->setOrientation(Qt::Horizontal);
        textBrowserSets = new QTextBrowser(centralWidget);
        textBrowserSets->setObjectName("textBrowserSets");
        textBrowserSets->setGeometry(QRect(390, 20, 271, 331));
        labelT = new QLabel(centralWidget);
        labelT->setObjectName("labelT");
        labelT->setGeometry(QRect(50, 260, 59, 18));
        labelValorTempo = new QLabel(centralWidget);
        labelValorTempo->setObjectName("labelValorTempo");
        labelValorTempo->setGeometry(QRect(290, 260, 59, 18));
        horizontalSliderMaximo = new QSlider(centralWidget);
        horizontalSliderMaximo->setObjectName("horizontalSliderMaximo");
        horizontalSliderMaximo->setGeometry(QRect(100, 180, 160, 20));
        horizontalSliderMaximo->setMinimum(1);
        horizontalSliderMaximo->setOrientation(Qt::Horizontal);
        horizontalSliderMinino = new QSlider(centralWidget);
        horizontalSliderMinino->setObjectName("horizontalSliderMinino");
        horizontalSliderMinino->setGeometry(QRect(100, 110, 160, 16));
        horizontalSliderMinino->setOrientation(Qt::Horizontal);
        lcdNumberMinino = new QLCDNumber(centralWidget);
        lcdNumberMinino->setObjectName("lcdNumberMinino");
        lcdNumberMinino->setGeometry(QRect(270, 110, 71, 41));
        lcdNumberMaximo = new QLCDNumber(centralWidget);
        lcdNumberMaximo->setObjectName("lcdNumberMaximo");
        lcdNumberMaximo->setGeometry(QRect(270, 190, 71, 41));
        lcdNumberMaximo->setProperty("intValue", QVariant(1));
        labelMinimo = new QLabel(centralWidget);
        labelMinimo->setObjectName("labelMinimo");
        labelMinimo->setGeometry(QRect(280, 90, 59, 18));
        labelMaximo = new QLabel(centralWidget);
        labelMaximo->setObjectName("labelMaximo");
        labelMaximo->setGeometry(QRect(280, 170, 59, 18));
        pushButtonConnect = new QPushButton(centralWidget);
        pushButtonConnect->setObjectName("pushButtonConnect");
        pushButtonConnect->setGeometry(QRect(40, 60, 82, 26));
        pushButtonDisconnect = new QPushButton(centralWidget);
        pushButtonDisconnect->setObjectName("pushButtonDisconnect");
        pushButtonDisconnect->setGeometry(QRect(130, 60, 82, 26));
        labelConnect = new QLabel(centralWidget);
        labelConnect->setObjectName("labelConnect");
        labelConnect->setGeometry(QRect(10, 360, 71, 18));
        lineEditIps = new QLineEdit(centralWidget);
        lineEditIps->setObjectName("lineEditIps");
        lineEditIps->setGeometry(QRect(40, 20, 331, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 679, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderTempo, &QSlider::valueChanged, labelValorTempo, qOverload<int>(&QLabel::setNum));
        QObject::connect(horizontalSliderMinino, &QSlider::valueChanged, lcdNumberMinino, qOverload<int>(&QLCDNumber::display));
        QObject::connect(pushButtonStart_2, SIGNAL(clicked()), MainWindow, SLOT(stopData()));
        QObject::connect(pushButtonConnect, SIGNAL(clicked()), MainWindow, SLOT(tcpConnect()));
        QObject::connect(horizontalSliderMaximo, &QSlider::valueChanged, lcdNumberMaximo, qOverload<int>(&QLCDNumber::display));
        QObject::connect(pushButtonDisconnect, SIGNAL(clicked()), MainWindow, SLOT(tcpDisconnect()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButtonStart_2->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        labelT->setText(QCoreApplication::translate("MainWindow", "Timing(s)", nullptr));
        labelValorTempo->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelMinimo->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        labelMaximo->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        pushButtonConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButtonDisconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        labelConnect->setText(QCoreApplication::translate("MainWindow", "----------------", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
