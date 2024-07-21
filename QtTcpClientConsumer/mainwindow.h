#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include "plotter.h"



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();


public slots:
  void getData();
  void tcpConnect();
  void tcpDisconnect();
  void getConnecetIps();
  void ipAtual();
  void timerEvent(QTimerEvent *timer) override;
  void startTempo();
  void stopTempo();


private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  bool setLoop;
  QList<QTcpSocket*> clients;
  QString ipSelecionado;
  int tempo;
  Plotter *dados;


};

#endif // MAINWINDOW_H
