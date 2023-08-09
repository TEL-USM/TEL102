#include <QCoreApplication>
#include "Counter.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Counter *p = new Counter();
    Counter *q = new Counter();
    QObject::connect(p, SIGNAL(valueChanged(int)), q, SLOT(setValue(int)));

    p->setValue(12);
    std::cout << "El valor de p es " << p->value() << " y el valor de q es " << q->value() << std::endl;

    q->setValue(48);
    std::cout << "El valor de p es " << p->value() << " y el valor de q es " << q->value() << std::endl;

    return a.exec();
}
