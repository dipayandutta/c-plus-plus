#include "widget.h"
#include <QGridLayout>
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("QGrid Layout");
    resize(500,500);

    QPushButton *pshBtn1 = new QPushButton(this);
    pshBtn1->setText("First");

    QPushButton *pshBtn2 = new QPushButton(this);
    pshBtn2->setText("Second");

    QPushButton *pshBtn3 = new QPushButton(this);
    pshBtn3->setText("Third");

    QPushButton *pshBtn4 = new QPushButton(this);
    pshBtn4->setText("Fourth");

    QGridLayout *grdLayout = new QGridLayout(this);
    grdLayout->addWidget(pshBtn1,0,0);
    grdLayout->addWidget(pshBtn2,0,1);
    grdLayout->addWidget(pshBtn3,1,0);
    grdLayout->addWidget(pshBtn4,1,1);

}

Widget::~Widget()
{
}

