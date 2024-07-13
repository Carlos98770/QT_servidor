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

private:
    bool setLoop;

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  

public slots:
    void putData();
    void stopData();
    void tcpConnect();
    void tcpDisconnect();
private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
};

#endif // MAINWINDOW_H
