#include "widget.h"
#include "ui_widget.h"

// Completar constructor
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{


}

Widget::~Widget()
{
    delete ui;
    delete scene;
    delete rect;
}
