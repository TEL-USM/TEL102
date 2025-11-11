#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->dialB,SIGNAL(valueChanged(int)),ui->lcdNumber_3,SLOT(display(int)));
    connect(ui->dialB,SIGNAL(valueChanged(int)),ui->lcdNumber_2,SLOT(display(int)));
    connect(ui->dialB,SIGNAL(valueChanged(int)),ui->lcdNumber,SLOT(display(int)));

}

Widget::~Widget()
{
    delete ui;
}
