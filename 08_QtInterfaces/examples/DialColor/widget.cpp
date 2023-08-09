#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    rect = new RectangleColor(0, 0, 50, 50);
    scene->addItem(rect);
    connect(ui->dialRojo, SIGNAL(valueChanged(int)), rect, SLOT(changeRed(int)));
    connect(ui->dialVerde, SIGNAL(valueChanged(int)), rect, SLOT(changeGreen(int)));
    connect(ui->dialAzul, SIGNAL(valueChanged(int)), rect, SLOT(changeBlue(int)));
}

Widget::~Widget()
{
    delete ui;
    delete scene;
    delete rect;
}
