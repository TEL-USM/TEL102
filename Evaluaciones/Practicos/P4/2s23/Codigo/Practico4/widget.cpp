#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->lcdNumber->display(0);
    ui->lcdNumber_2->display("12 a");
    connect(ui->dial, SIGNAL(valueChanged(int)), this, SLOT(updateTime(int)));
}

void Widget::updateTime(int value){
    QString hora;
    if(value==0){
        hora = "12 a";
    }else if(value==12){
        hora = "12 p";
    }if(value>0 && value<12){
        hora = QString::number(value) + " a";

    }else if(value>12 && value<=23){
        hora = QString::number(value-12) + " p";
    }

    ui->lcdNumber_2->display(hora);
}

Widget::~Widget()
{
    delete ui;
}

