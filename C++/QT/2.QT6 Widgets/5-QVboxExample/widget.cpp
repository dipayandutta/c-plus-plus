#include "widget.h"
#include <QVBoxLayout>
#include <QPushButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
       setWindowTitle("QVBox Layout Example");
       resize(500,500);

       QPushButton *pshBtn1 = new QPushButton(this);
       pshBtn1->setText("First");

       QPushButton *pshBtn2 = new QPushButton(this);
       pshBtn2->setText("Second");

       QPushButton *pshBtn3 = new QPushButton(this);
       pshBtn3->setText("Third");

       QPushButton *pshBtn4 = new QPushButton(this);
       pshBtn1->setText("Fourth");

       QVBoxLayout *vbox = new QVBoxLayout(this);
       vbox->addWidget(pshBtn1);
       vbox->addWidget(pshBtn2);

       vbox->addWidget(pshBtn3);
       vbox->addWidget(pshBtn4);

}

Widget::~Widget()
{
}

