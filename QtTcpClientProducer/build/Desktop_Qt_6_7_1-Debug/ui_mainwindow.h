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
    QGridLayout *gridLayout;
    QLabel *labelValorTempo;
    QSlider *horizontalSliderMaximo;
    QLabel *labelT;
    QPushButton *pushButtonStart_2;
    QLabel *labelConnect;
    QLCDNumber *lcdNumberMinino;
    QSlider *horizontalSliderMinino;
    QSlider *horizontalSliderTempo;
    QTextBrowser *textBrowserSets;
    QLineEdit *lineEditIps;
    QPushButton *pushButtonConnect;
    QLCDNumber *lcdNumberMaximo;
    QPushButton *pushButtonDisconnect;
    QPushButton *pushButtonStart;
    QLabel *labelMinimo;
    QLabel *labelMaximo;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(739, 510);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        labelValorTempo = new QLabel(centralWidget);
        labelValorTempo->setObjectName("labelValorTempo");

        gridLayout->addWidget(labelValorTempo, 7, 5, 1, 1);

        horizontalSliderMaximo = new QSlider(centralWidget);
        horizontalSliderMaximo->setObjectName("horizontalSliderMaximo");
        horizontalSliderMaximo->setMinimum(1);
        horizontalSliderMaximo->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderMaximo, 6, 0, 1, 4);

        labelT = new QLabel(centralWidget);
        labelT->setObjectName("labelT");

        gridLayout->addWidget(labelT, 7, 0, 1, 1);

        pushButtonStart_2 = new QPushButton(centralWidget);
        pushButtonStart_2->setObjectName("pushButtonStart_2");

        gridLayout->addWidget(pushButtonStart_2, 8, 3, 1, 3);

        labelConnect = new QLabel(centralWidget);
        labelConnect->setObjectName("labelConnect");

        gridLayout->addWidget(labelConnect, 9, 0, 1, 1);

        lcdNumberMinino = new QLCDNumber(centralWidget);
        lcdNumberMinino->setObjectName("lcdNumberMinino");

        gridLayout->addWidget(lcdNumberMinino, 3, 4, 1, 2);

        horizontalSliderMinino = new QSlider(centralWidget);
        horizontalSliderMinino->setObjectName("horizontalSliderMinino");
        horizontalSliderMinino->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderMinino, 3, 0, 1, 4);

        horizontalSliderTempo = new QSlider(centralWidget);
        horizontalSliderTempo->setObjectName("horizontalSliderTempo");
        horizontalSliderTempo->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderTempo, 7, 1, 1, 4);

        textBrowserSets = new QTextBrowser(centralWidget);
        textBrowserSets->setObjectName("textBrowserSets");

        gridLayout->addWidget(textBrowserSets, 0, 6, 9, 1);

        lineEditIps = new QLineEdit(centralWidget);
        lineEditIps->setObjectName("lineEditIps");

        gridLayout->addWidget(lineEditIps, 0, 0, 1, 6);

        pushButtonConnect = new QPushButton(centralWidget);
        pushButtonConnect->setObjectName("pushButtonConnect");

        gridLayout->addWidget(pushButtonConnect, 1, 0, 1, 2);

        lcdNumberMaximo = new QLCDNumber(centralWidget);
        lcdNumberMaximo->setObjectName("lcdNumberMaximo");
        lcdNumberMaximo->setProperty("intValue", QVariant(1));

        gridLayout->addWidget(lcdNumberMaximo, 6, 4, 1, 2);

        pushButtonDisconnect = new QPushButton(centralWidget);
        pushButtonDisconnect->setObjectName("pushButtonDisconnect");

        gridLayout->addWidget(pushButtonDisconnect, 1, 2, 1, 2);

        pushButtonStart = new QPushButton(centralWidget);
        pushButtonStart->setObjectName("pushButtonStart");

        gridLayout->addWidget(pushButtonStart, 8, 0, 1, 3);

        labelMinimo = new QLabel(centralWidget);
        labelMinimo->setObjectName("labelMinimo");

        gridLayout->addWidget(labelMinimo, 2, 5, 1, 1);

        labelMaximo = new QLabel(centralWidget);
        labelMaximo->setObjectName("labelMaximo");

        gridLayout->addWidget(labelMaximo, 5, 5, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 739, 23));
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
        labelValorTempo->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelT->setText(QCoreApplication::translate("MainWindow", "Timing(s)", nullptr));
        pushButtonStart_2->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        labelConnect->setText(QCoreApplication::translate("MainWindow", "----------------", nullptr));
        pushButtonConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButtonDisconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        labelMinimo->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        labelMaximo->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
