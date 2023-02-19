#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QRadioButton>
#include <QLabel>
#include <QVBoxLayout>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    QLabel *label;
    QRadioButton *rad1;
    QRadioButton *rad2;
    QRadioButton *rad3;
    QVBoxLayout *vbox;
};
#endif // WIDGET_H
