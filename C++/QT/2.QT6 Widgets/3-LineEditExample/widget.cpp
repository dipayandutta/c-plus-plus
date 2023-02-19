#include "widget.h"
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("QLineEdit");
    resize(400,400);
    /*
    QLineEdit *lineEdit = new QLineEdit(this);
    lineEdit->setGeometry(20,20,250,50);
    lineEdit->setFont(QFont("Times",14));
    lineEdit->setEnabled(true);
    //password field
    lineEdit->setEchoMode(QLineEdit::EchoMode::Password);
    */

    //username Label
    QLabel *usernameLabel = new QLabel(this);
    usernameLabel->setText("username:");
    usernameLabel->setGeometry(10,10,120,30);
    usernameLabel->setFont(QFont("Times",14));
    usernameLabel->setStyleSheet("color:blue");

    //username LineEdit
    QLineEdit *username = new QLineEdit(this);
    username->setGeometry(100,10,120,30);
    username->setFont(QFont("Times",12));
    username->setEnabled(true);
}

Widget::~Widget()
{
}

