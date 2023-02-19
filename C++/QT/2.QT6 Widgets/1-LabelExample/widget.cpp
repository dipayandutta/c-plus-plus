#include "widget.h"
#include<QLabel>
#include<QMovie>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("QLabel");
    resize(500,400);

    /*
    //QLabel *label = new QLabel("This is the label",this);
    QLabel *label = new QLabel(this);
    label->setText("Text Label");
    //label->move(100,100);//move(x_position,y_position)
    label->setFont(QFont("Times",20));
    label->setStyleSheet("color:red");
    label->setGeometry(100,100,300,300);
    */
    /*Loading a png file*/
    /*
    QLabel *label = new QLabel(this);
    label->setGeometry(100,100,1500,500);
    label->setPixmap(QPixmap(":/images/Donald.png"));
    */
    /*Loading a GIF file*/
    QLabel *label = new QLabel(this);
    QMovie *movie = new QMovie(":/images/Animation.gif");
    label->setMovie(movie);
    label->setGeometry(10,10,500,500);
    movie->start();
}

Widget::~Widget()
{
}

