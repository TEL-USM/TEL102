#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>
#include <vector>

using namespace std;

struct polinomio{
    vector<float> grado;
    vector<float> coefi;
};

struct cogr{
    float coef;
    float grado;

};

polinomio DerivarPolinomio(polinomio pol){
    polinomio ret;
    ret.grado[int(pol.coefi.size())];
    ret.coefi[int(pol.coefi.size())];

    for (int i = 0; i < int(pol.coefi.size()); i++)
    {
        ret.grado.push_back(float(pol.grado[i])-1);
        ret.coefi.push_back(float(pol.grado[i])*float(pol.coefi[i]));

    }
    return ret;
}


double CalculoY(polinomio pol, float x){
    double y = 0;
    for ( int i = 0; i < int(pol.coefi.size()); i++)
    {
        y += float(pol.coefi[i]) * float(pow(x,pol.grado[i]));

    }
    return y;
}


polinomio StrAPol(char str[]){
    char *token = strtok(str, "+");
    vector<char*> p;
    vector<cogr> pol;
    int sumandos = 0;
    while (token != NULL)
    {

        p.push_back(token);
        token = strtok(NULL, "+");
        sumandos++;
    }

    for (int j = 0; j < int(p.size()); j++)
        {
        char *sep = strtok(p[j], "x^");
        int i = 0;
        cogr cgr;

        while (sep != NULL)
        {

            if (i==0)
            {
                cgr.coef = float(atof(sep));


            }
            else
            {
                cgr.grado = float(atof(sep));



            }
            i++;
            sep = strtok(NULL, "x^");
        }
        pol.push_back(cgr);

    }
    polinomio polino;
    polino.coefi[sumandos];
    polino.grado[sumandos];

    for (int i = 0; i < sumandos; i++)
    {
        polino.coefi.push_back(float(pol[i].coef));
        polino.grado.push_back(float(pol[i].grado));
    }
    return polino;
}



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{


    ui->setupUi(this);
    double srate = 100;

// ************ POLINOMIO DE EJEMPLO ************
    char str[] = "1x^2";
    polinomio poli = StrAPol(str);
    float x = 1;
    polinomio derivado;
    derivado = DerivarPolinomio(poli);
    float pend = CalculoY(derivado,x);
    float y = CalculoY(poli,x);

// ************ GRAFICA TANGENTE EN EL PUNTO ************

    QLineSeries *tan = new QLineSeries();
    for (int i=-10*srate;i<10*srate;i++ ) {
        tan->append(i/srate,pend*((i/srate)-x) + y);
    }
    tan->setName("Tangente");

// ************ GRAFICA POLINOMIO ************

    QLineSeries *pol = new QLineSeries();
    for (int i=-10*srate;i<10*srate;i++ ) {
        pol->append(i/srate,CalculoY(poli,i/srate));
    }
    pol->setName("Polinomio 2x^5 + 0.2x^4 + 3x^3 + 10.4x + 1");


    QChart *chart = new QChart();
    chart->addSeries(pol);
    chart->addSeries(tan);
    chart->createDefaultAxes();
    chart->axisX()->setRange(x-50,x+50);
    chart->axisY()->setRange(y-50,y+50);
    chart->scroll(chart->plotArea().width(),0);

    QGraphicsSimpleTextItem *texto;
    texto = new QGraphicsSimpleTextItem(chart);
    texto->setPos(100,100);
    texto->setText("Zoom in: Selecciona un área - Zoom out: Click izquierdo");

    QChartView *view = new QChartView(chart);
    view->setRenderHint(QPainter::Antialiasing);
    this->setCentralWidget(view);
    view->setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
    view->setRubberBand(QChartView::HorizontalRubberBand); //zoom


/*
    double srate = 100;
    ui->setupUi(this);
    QLineSeries *sin_series = new QLineSeries();
    for (int i=0; i<10*srate;i++){
        sin_series->append(i/srate, sin(i/srate));
    }
    sin_series->setName("seno");

    sin_series->setOpacity(0.1);

    srate = 10;
    QLineSeries *cos_series = new QLineSeries();
    for (int i=0; i<10*srate;i++){
        cos_series->append(i/srate, cos(i/srate));
    }
    //cos_series->setPointsVisible();
    cos_series->setName("coseno");

    srate = 5;
    QLineSeries *sin_cos = new QLineSeries();
    for (int i=0; i<10*srate;i++){
        sin_cos->append(i/srate, cos(i/srate) + sin(i/srate));
    }
    sin_cos->setName("seno + coseno");
    sin_cos->setPointsVisible(true);

    srate = 1;
    QScatterSeries *tange = new QScatterSeries();
    for (int i=0; i<10*srate;i++){
        tange->append(i/srate, tan(i/srate));
    }
    tange->setName("tangente 1 Hz");
    tange->setPointsVisible(true);
    tange->setPointLabelsVisible();

    srate = 100;
    QLineSeries *tange2 = new QLineSeries();
    for (int i=0; i<10*srate;i++){
        tange2->append(i/srate, tan(i/srate));
    }
    tange2->setName("tangente 100 Hz");


    QChart *chart = new QChart();
    chart->addSeries(sin_series);
    chart->addSeries(cos_series);
    chart->addSeries(sin_cos);
    chart->addSeries(tange);
    chart->addSeries(tange2);
    tange2->setColor(tange->color());
    chart->createDefaultAxes();
    chart->axisY()->setRange(-2,2);
    chart->setTitle("funciones trigonometricas");
    QChartView *chartView = new QChartView(chart);
    //chartView->setRenderHint(QPainter::Antialiasing);
    this->setCentralWidget(chartView);
    */
}

MainWindow::~MainWindow()
{
    delete ui;
}

