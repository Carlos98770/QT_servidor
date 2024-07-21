#include "plotter.h"
#include <QBrush>
#include <QPainter>
#include <QPen>
#include <iostream>
#include <vector>


Plotter::Plotter(QWidget *parent)
    : QWidget{parent}

{}

void Plotter::paintEvent(QPaintEvent *event)
{
    //int x1,x2,y1,y2;
    QPainter painter(this);
    QPen pen;
    QBrush brush;

    brush.setColor(QColor(255,255,0));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(255,0,0));
    pen.setWidth(2);

    painter.setBrush(brush);
    painter.setPen(pen);

    painter.drawRect(0,0,width(),height());
    pen.setColor(QColor(0,0,255));
    pen.setWidth(3);
    painter.setPen(pen);


    if(clear){
        clear = false;
        return;
    }


    std::vector<double> num,tim;

    int numMax,numMin;
    long timMax,timMin;
    int len = numero.size();

    if(len < 5)
        return;

    numMax = *std::max_element(numero.begin(),numero.end()); // maior valor numero
    numMin = *std::min_element(numero.begin(),numero.end());  // menor Valor numero
    timMax = *std::max_element(timer.begin(),timer.end()); // maior valor tempo
    timMin = *std::min_element(timer.begin(),timer.end()); // menor valor tempo

    for(int i = 0; i < len; i++){
        //Normalizando os dados
        if(!((timMax-timMin) == 0) && !((numMax - numMin) == 0)){
            tim.push_back((timer[i] - timMin)*width() / (timMax - timMin));
            num.push_back(height() - (numero[i] - numMin) * height() / (numMax - numMin));

        }
    }

    for(int j=0; j < len -1;j++){
        painter.drawLine(tim[j],num[j],tim[j+1],num[j+1]);

    }
}


void Plotter::receberValores(long &timerNews, int &numerosNews)
{
    timer.push_back(timerNews);
    numero.push_back(numerosNews);
    repaint();

}

void Plotter::rePaint()
{

    clear = true;
    timer.clear();
    numero.clear();
    repaint();
}
