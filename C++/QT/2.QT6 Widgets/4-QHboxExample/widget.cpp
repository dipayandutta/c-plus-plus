#include "widget.h"
#include <QHBoxLayout>
#include <QPushButton>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("QHbox Layout");
    resize(400,400);

    QPushButton *pshBtn1 = new QPushButton(this);
    pshBtn1->setText("First");

    QPushButton *pshBtn2 = new QPushButton(this);
    pshBtn2->setText("Second");

    QPushButton *pshBtn3 = new QPushButton(this);
    pshBtn3->setText("Third");

    QPushButton *pshBtn4 = new QPushButton(this);
    pshBtn1->setText("Fourth");

    QHBoxLayout * hbox = new QHBoxLayout(this);
    hbox->addWidget(pshBtn1);
    hbox->addWidget(pshBtn2);
    hbox->addWidget(pshBtn3);
    hbox->addWidget(pshBtn4);
}

Widget::~Widget()
{
}

