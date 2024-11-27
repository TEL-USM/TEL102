#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // Inicialización de atributos privados, encargados de almacenar la info
    // de proporción de energía industrial y residencial.
    stock_enero = ui->febrero->value();
    stock_febrero = ui->enero->value();
    stock_marzo = ui->marzo->value();

    // Creación de gráfico
    bset = new QBarSet("Stocks");
    *bset << stock_enero << stock_febrero << stock_marzo;

    bseries = new QBarSeries();

    bseries->append(bset);
    QChart *chart = new QChart();
    chart->addSeries(bseries);
    chart->createDefaultAxes();
    chart->setTitle("Stock por mes");
    ui->graphicsView->setChart(chart);

    // Conexión de signals y slots
    connect(ui->enero,  SIGNAL(valueChanged(int)), this, SLOT(updateEnero(int)));
    connect(ui->febrero,  SIGNAL(valueChanged(int)), this, SLOT(updateFebrero(int)));
    connect(ui->marzo,  SIGNAL(valueChanged(int)), this, SLOT(updateMarzo(int)));
}

void Widget::updateEnero(int value){
    stock_enero = value;
    updatePlot();
}

void Widget::updateFebrero(int value){
    stock_febrero = value;
    updatePlot();
}

void Widget::updateMarzo(int value){
    stock_marzo = value;
    updatePlot();
}

void Widget::updatePlot(){
    bseries->clear();
    bset = new QBarSet("Stocks");
    *bset << stock_enero << stock_febrero << stock_marzo;
    bseries->append(bset);
}

Widget::~Widget()
{

    QChart *chart = ui->graphicsView->chart();
    delete ui;
    delete chart;
    delete bseries;

}
