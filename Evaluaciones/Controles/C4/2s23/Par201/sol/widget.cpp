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
    QBarSet *set0 = new QBarSet("Encuestas");
    *set0 << ui->insatisfecho->text().toInt()
          << ui->neutro->text().toInt()
          << ui->satisfecho->text().toInt();

    QBarSeries *series = new QBarSeries();
    series->append(set0);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Encuestas");
    ui->graphicsView->setChart(chart);
}

Widget::~Widget()
{
    delete ui;
}

