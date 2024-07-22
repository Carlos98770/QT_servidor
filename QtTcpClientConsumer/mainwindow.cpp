#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <iostream>
#include <time.h>
#include <QNetworkInterface>
#include <string>

bool flag = false;


MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)


{
  ui->setupUi(this);
  socket = new QTcpSocket(this);
  setLoop = false;
  ipSelecionado = 0;
  tempo = 0;
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


void MainWindow::getConnecetIps(){

    ipSelecionado = 0;
    ui->listWidgetIps->clear();
    //Usando list do servidor para listar os ips que forneceram dados
    socket->write("list\r\n");
    socket->waitForBytesWritten();
    socket->waitForReadyRead();

    QString str;
    while(socket->bytesAvailable()){
        str = socket->readLine().replace("\n","").replace("\r","");
        ui->listWidgetIps->addItem(str);
    }


}

void MainWindow::ipAtual(){
    QListWidgetItem *currentItem = ui->listWidgetIps->currentItem();
    QString ip = currentItem->text();
    auxip = ip;
    if(!(ip == ipSelecionado)){
        ipSelecionado = ip;
        ui->widgetGrafico->rePaint();

    }

    flag = true;

}

void MainWindow::timerEvent(QTimerEvent *timer)
{
    getData();
}

void MainWindow::startTempo()
{

    if(flag || !(ipSelecionado.size() == 0) ){
        tempo = startTimer(ui->horizontalSliderTimer->value() * 1000);

    }
    flag = true;
}

void MainWindow::stopTempo()
{
    killTimer(tempo);
    flag = false;
}



void MainWindow::getData(){
    if(flag){
        QByteArray array;
        qint64 thetime;
        QString str,labelServer;
        QStringList list;
        std::vector<long> timerNews;
        std::vector<int> numerosNews;

        qDebug() << "to get data...";

        if(socket->state() == QAbstractSocket::ConnectedState){
            if(socket->isOpen()){


                qDebug() << "reading...";
                labelServer = "get " + ipSelecionado + " 1\r\n";
                array = labelServer.toLatin1();

                socket->write(array);
                socket->waitForBytesWritten();
                socket->waitForReadyRead();
                qDebug() << socket->bytesAvailable();



                while (socket->bytesAvailable()){
                  str = socket->readLine().replace("\n","").replace("\r","");
                  list = str.split(" ");

                  if(list.size() == 2){
                      bool ok;
                      str = list.at(0);
                      timerNews.push_back(str.toLong());
                      thetime = str.toLongLong(&ok);
                      str = list.at(1);
                      numerosNews.push_back(str.toInt());
                      qDebug() << thetime << ": " << str;


                  }


                }

            }
            ui->widgetGrafico->receberValores(timerNews[0],numerosNews[0]);
         }

    }

}


MainWindow::~MainWindow()
{
  delete socket;
  delete ui;
}




