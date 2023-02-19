#include "widget.h"
#include <QHBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("QRadio Button Example");
    resize(500,500);

    QHBoxLayout *hbox = new QHBoxLayout(this);

    rad1 = new QRadioButton(this);
    rad1->setText("Python!");

    rad2 = new QRadioButton(this);
    rad2->setText("C++");

    rad3 = new QRadioButton(this);
    rad3->setText("JAVA");

    hbox->addWidget(rad1);
    hbox->addWidget(rad2);
    hbox->addWidget(rad3);

    vbox = new QVBoxLayout(this);
    label = new QLabel(this);
    label->setText("Select");
    vbox->addWidget(label);

    vbox->addLayout(hbox);
}

Widget::~Widget()
{
}

