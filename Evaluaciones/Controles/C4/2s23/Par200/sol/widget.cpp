#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(updatePlot()));
}

void Widget::updatePlot(){
    QPieSeries *series = new QPieSeries();
    series->append("Perros",ui->perros->text().toInt());
    series->append("Gatos",ui->gatos->text().toInt());
    series->append("Conejos",ui->conejos->text().toInt());
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Animales atendidos");
    ui->graphicsView->setChart(chart);
}

Widget::~Widget()
{
    delete ui;
}

