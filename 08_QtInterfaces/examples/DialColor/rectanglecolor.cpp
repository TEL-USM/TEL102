#include "rectanglecolor.h"

RectangleColor::RectangleColor(int x, int y, int w, int h) :
    QGraphicsRectItem(x,y,w,h)
{
    updateColor();
}

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

void RectangleColor::updateColor(){
    QColor color(this->rojo, this->verde, this->azul);
    this->setBrush(QBrush(color));
}

