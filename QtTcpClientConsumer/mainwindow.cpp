#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <iostream>
#include <time.h>
#include <QNetworkInterface>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  socket = new QTcpSocket(this);
  setLoop = false;

  connect(ui->pushButtonStart,
          SIGNAL(clicked(bool)),
          this,
          SLOT(getData()));
}

void MainWindow::tcpConnect(){

    QString ipServidor = ui->lineEditIpsServidor->text();
    socket->connectToHost(ipServidor,1234);
    if(socket->waitForConnected(3000)){
        qDebug() << "Connected";
        ui->labelStatus->setText("Connected");
      }
    else{
        qDebug() << "Disconnected";
      }
    }

void MainWindow::tcpDisconnect(){
    socket->disconnectFromHost();
    ui->labelStatus->setText("--------------------");
}

void MainWindow::stopData()
{
    setLoop = false;
}

void MainWindow::getConnecetIps(){
    QStringList iplist;
    foreach (const QHostAddress &address, QNetworkInterface::allAddresses()) {
        if (address.protocol() == QAbstractSocket::IPv4Protocol && address != QHostAddress(QHostAddress::LocalHost))
            iplist << address.toString();
    }
    ui->listWidgetIps->addItems(iplist);
}



void MainWindow::getData(){
  QString str;
  QByteArray array;
  QStringList list;
  qint64 thetime;
  qDebug() << "to get data...";


  if(socket->state() == QAbstractSocket::ConnectedState){
    if(socket->isOpen()){

        qDebug() << "reading...";
        socket->write("get 127.0.0.1 5\r\n");
        socket->waitForBytesWritten();
        socket->waitForReadyRead();
        qDebug() << socket->bytesAvailable();


        while(socket->bytesAvailable()){
          str = socket->readLine().replace("\n","").replace("\r","");
          list = str.split(" ");
          if(list.size() == 2){
            bool ok;
            str = list.at(0);
            thetime = str.toLongLong(&ok);
            str = list.at(1);
            qDebug() << thetime << ": " << str;


        }

      }

    }
  }
}


MainWindow::~MainWindow()
{
  delete socket;
  delete ui;
}
