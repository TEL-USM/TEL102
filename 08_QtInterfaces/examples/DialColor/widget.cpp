#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    // Los lienzos de Qt se definen en base a un escenario
    // (porque los lienzos también se pueden utilizar para hacer
    // animaciones)
    scene = new QGraphicsScene(this);
    // Se conecta la escena con el graphicsView (el lienzo)
    ui->graphicsView->setScene(scene);
    // A continuación creamos el rectángulo en el lienzo
    rect = new RectangleColor(0, 0, 50, 50);
    scene->addItem(rect);

    // Acá realizamos las conexiones de signals y slots de nuestro programa
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
