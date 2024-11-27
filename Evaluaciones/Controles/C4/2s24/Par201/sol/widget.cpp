#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // Inicialización de atributos privados, encargados de almacenar la info
    // de proporción de energía industrial y residencial.

    // Creación de gráfico
    pseries = new QPieSeries();

    pseries->append("2023", y2023);
    pseries->append("2024", y2024);


    QChart *chart = new QChart();
    chart->addSeries(pseries);
    chart->createDefaultAxes();
    chart->setTitle("Ventas por año");
    ui->graphicsView->setChart(chart);

    // Conexión de signals y slots
    connect(ui->update,  SIGNAL(clicked()), this, SLOT(updatePlot()));

}

void Widget::updatePlot(){
    pseries->clear();
    y2023 = ui->y2023->toPlainText().toInt();
    y2024 = ui->y2024->toPlainText().toInt();;
    pseries->append("2023", y2023);
    pseries->append("2024", y2024);
}

Widget::~Widget()
{

    QChart *chart = ui->graphicsView->chart();
    delete ui;
    delete chart;
    delete pseries;

}
