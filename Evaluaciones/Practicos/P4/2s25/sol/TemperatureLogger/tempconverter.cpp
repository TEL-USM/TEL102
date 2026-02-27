#include "tempconverter.h"

TempConverter::TempConverter(QObject *parent)
    : QObject(parent)
    , m_tempCelsius(0) // temperatura inicial interna
{
}

int TempConverter::getTempCelsius(){
    return m_tempCelsius;
}

int TempConverter::getTempFahrenheit(){
    // Conversión simple con int
    return (m_tempCelsius * 9) / 5 + 32;
}

void TempConverter::setTempCelsius(int value){
    if (m_tempCelsius == value)
        return; // No emitir señales si no hay cambio

    m_tempCelsius = value;

    emit tempCelsiusChanged(m_tempCelsius);
    emit tempFahrenheitChanged(getTempFahrenheit());
}

void TempConverter::setTempFahrenheit(int value){
    int c = (value - 32) * 5 / 9;

    if (m_tempCelsius == c)
        return;

    m_tempCelsius = c;

    emit tempFahrenheitChanged(value);
    emit tempCelsiusChanged(m_tempCelsius);
}
