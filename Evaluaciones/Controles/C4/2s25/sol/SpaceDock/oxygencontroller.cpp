#include "oxygencontroller.h"

OxygenController::OxygenController(QObject *parent)
    : QObject(parent)
    , m_oxygenPercent(21) // valor típico aproximado de O2 en atmósfera
{}

int OxygenController::getOxygenPercent(){
    return m_oxygenPercent;
}

int OxygenController::getOxygenKPa(){
    // Aproximación simple:
    // 100% oxígeno ≈ 101 kPa
    // Usamos aritmética entera
    return (m_oxygenPercent * 101) / 100;
}

void OxygenController::setOxygenPercent(int value){
    if (value < 0) value = 0;
    if (value > 100) value = 100;

    if (m_oxygenPercent == value)
        return; // evitar señales innecesarias

    m_oxygenPercent = value;

    emit oxygenPercentChanged(m_oxygenPercent);
    emit oxygenKPaChanged(getOxygenKPa());
}

void OxygenController::setOxygenKPa(int value){
    if (value < 0) value = 0;
    if (value > 101) value = 101;

    // Conversión inversa aproximada
    int percent = (value * 100) / 101;

    if (m_oxygenPercent == percent)
        return;

    m_oxygenPercent = percent;

    emit oxygenKPaChanged(value);
    emit oxygenPercentChanged(m_oxygenPercent);
}
