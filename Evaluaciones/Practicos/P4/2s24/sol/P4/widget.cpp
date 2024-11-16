#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // Inicialización de atributos privados, encargados de almacenar la info
    // de proporción de energía industrial y residencial.
    ind_prop = ui->ind->value();
    res_prop = ui->res->value();

    // Creación de gráfico
    pseries = new QPieSeries();
    pseries->append("Sector Industrial",ind_prop);
    pseries->append("Sector Residencial",res_prop);
    QChart *chart = new QChart();
    chart->addSeries(pseries);
    chart->createDefaultAxes();
    chart->setTitle("Distribución de Energía");
    ui->graphicsView->setChart(chart);

    // Conexión de signals y slots
    connect(ui->ind,  SIGNAL(valueChanged(int)), this, SLOT(updateInd(int)));
    connect(ui->res,  SIGNAL(valueChanged(int)), this, SLOT(updateRes(int)));
}

void Widget::updateInd(int prop){
    ind_prop = prop;
    updatePlot();
}

void Widget::updateRes(int prop){
    res_prop = prop;
    updatePlot();
}

void Widget::updatePlot(){
    pseries->clear();
    pseries->append("Sector Industrial",ind_prop);
    pseries->append("Sector Residencial",res_prop);

}

Widget::~Widget()
{

    QChart *chart = ui->graphicsView->chart();
    delete ui;
    delete chart;
    delete pseries;

}
