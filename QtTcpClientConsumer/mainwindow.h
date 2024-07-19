#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>

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
  void stopData();
  void getConnecetIps();
private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  bool setLoop;
  QList<QTcpSocket*> clients;

};

#endif // MAINWINDOW_H
