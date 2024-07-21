#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <vector>
#include <iostream>
class Plotter : public QWidget
{
    Q_OBJECT
public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void receberValores(long &timerNews,int & numerosNews);

private:
    std::vector<long> timer;
    std::vector<int> numero;

signals:
};

#endif // PLOTTER_H
