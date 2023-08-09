#include "mainwindow.h"
#include "ui_mainwindow.h"

// Constructor de ventana principal. Se inicializa con el constructor de
// QMainWindow y su atributo ui con lista de inicialización
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // Agrega a MainWindow todos los elementos que se configuran a través del QtDesigner
    ui->setupUi(this);
}

// Destructor de MainWindow. Libera puntero ui una vez se cierra la ventana
MainWindow::~MainWindow()
{
    delete ui;
}

