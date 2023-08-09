#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog),timer(new QTimer(this))
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    asc = new QAscensor(10,10,100,30);
    scene->addItem(asc);
    connect(ui->startButton,SIGNAL(pressed()),this,SLOT(start()));
    connect(ui->stopButton,SIGNAL(pressed()),this,SLOT(stop()));
}

Dialog::~Dialog()
{
    delete ui;
    delete asc;
    delete scene;
    delete timer;
}

void Dialog::start()
{
    connect(timer,SIGNAL(timeout()),scene,SLOT(advance()));
    timer->start(1000);
}

void Dialog::stop()
{
    timer->stop();
}
