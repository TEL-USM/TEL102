#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    // Completar el código del constructor según lo solicitado
}

// Complete con las implementaciones de los métodos/slots indicados

Widget::~Widget()
{
    // Recuerde liberar memoria dinámica!
    delete ui;
}
