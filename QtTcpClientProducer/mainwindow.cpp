#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <time.h>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
      QMainWindow(parent), ui(new Ui::MainWindow){
      ui->setupUi(this);
      socket = new QTcpSocket(this);



      connect(ui->pushButtonStart,
              SIGNAL(clicked(bool)),
              this,
              SLOT(putData()));

      setLoop = false;
}

void MainWindow::tcpConnect(){
    QString ipServidor = ui->lineEditIps->text();

    socket->connectToHost(ipServidor,1234);
        if(socket->waitForConnected(3000)){
            qDebug() << "Connected";
            ui->labelConnect->setText("Connected");
        }
        else{
            qDebug() << "Disconnected";
        }
    }

void MainWindow::tcpDisconnect()
{
    QString ipServidor = ui->lineEditIps->text();
    socket->disconnectFromHost();
    ui->labelConnect->setText("----------------");
}


void MainWindow::putData(){
      QDateTime datetime;
      QString str;
      qint64 msecdate;
      int min = (int)ui->lcdNumberMinino->value();
      int max = (int)ui->lcdNumberMaximo->value();
      float aleatorio = min +  rand()%(max - min);


      if(socket->state()== QAbstractSocket::ConnectedState){
        clock_t start = clock();
        setLoop = true;
        while(setLoop){
            QCoreApplication::processEvents();
            aleatorio = min +  rand()%(max - min);
            clock_t end = clock();
            float tempo = float(end - start)/CLOCKS_PER_SEC;
            msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
            str = "set "+ QString::number(msecdate) + " " +
                  QString::number(aleatorio)+"\r\n";

            if(tempo > ui->horizontalSliderTempo->value() && ui->horizontalSliderTempo->value() > 0){
                ui->textBrowserSets->append(str);
                start = clock();
                qDebug() << str;
                qDebug() << socket->write(str.toStdString().c_str())
                         << " bytes written";
                if(socket->waitForBytesWritten(3000)){
                    qDebug() << "wrote";
                }
            }

        }

    }

}
void MainWindow::stopData(){
    setLoop = false;

}

MainWindow::~MainWindow(){
      delete socket;
      delete ui;
}
