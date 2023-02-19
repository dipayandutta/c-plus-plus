#include "widget.h"
#include<QPushButton>
#include <QMenu>
#include<QLabel>
#include</usr/include/boost/lambda/lambda.hpp>
#include</usr/include/boost/asio.hpp>
#include<iostream>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Push Button Example");
    resize(500,500);

    QPushButton *button = new QPushButton(this);
    button->setText("Click Me");
    button->setGeometry(20,20,120,130);
    button->setFont(QFont("Times",12));
    button->setIcon(QIcon(":/images/apple_icon.png"));
    button->setIconSize(QSize(30,30));

    //add pop-up menu to the button
    QMenu *menu = new QMenu(this);
    menu->setFont(QFont("Times",20));
    menu->setStyleSheet("background-color:yellow");
    menu->addAction("Copy");
    menu->addAction("Paste");
    menu->addAction("Cut");

    button->setMenu(menu);

    using namespace boost::lambda;
    typedef std::istream_iterator<int> in;

    std::for_each(in(std::cin),in(),std::cout<< (_1*3)<< "");
    std::cout<<"Hello World Test!";

    QLabel *label = new QLabel(this);
    label->setText("Hello World");
}

Widget::~Widget()
{
}

