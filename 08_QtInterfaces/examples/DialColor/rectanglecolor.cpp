#include "rectanglecolor.h"

RectangleColor::RectangleColor(int x, int y, int w, int h) :
    QGraphicsRectItem(x,y,w,h)
{
    updateColor();
}

// Los métodos change son encargados de modificar el
// valor de cada atributo privado
void RectangleColor::changeRed(int rojo){
    this->rojo = rojo;
    updateColor();
}

void RectangleColor::changeGreen(int verde){
    this->verde = verde;
    updateColor();
}

void RectangleColor::changeBlue(int azul){
    this->azul = azul;
    updateColor();
}

// El método updateColor es el encargado de actualizar
// el color del rectángulo visualmente
void RectangleColor::updateColor(){
    // Crea un objeto de tipo QColor (que se utiliza para colorear)
    QColor color(this->rojo, this->verde, this->azul);
    // Y luego cambia el color del rectángulo utilizando ese color
    this->setBrush(QBrush(color));
}

