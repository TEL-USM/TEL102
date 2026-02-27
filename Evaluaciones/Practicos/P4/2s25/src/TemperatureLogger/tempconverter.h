#ifndef TEMPCONVERTER_H
#define TEMPCONVERTER_H

#include <QObject>

class TempConverter : public QObject {
    Q_OBJECT

public:
    TempConverter(QObject *parent = 0);

    // Acceso a las temperaturas actuales
    int getTempCelsius();
    int getTempFahrenheit();

public slots:
    // Ajusta la temperatura interna usando un valor en Celsius
    void setTempCelsius(int value);

    // Ajusta la temperatura interna usando un valor en Fahrenheit
    void setTempFahrenheit(int value);

signals:
    // Se emite cada vez que la temperatura en Celsius cambia
    void tempCelsiusChanged(int value);

    // Se emite cada vez que la temperatura en Fahrenheit cambia
    void tempFahrenheitChanged(int value);

private:
    int m_tempCelsius;   // la temperatura se almacena internamente en °C
};

#endif // TEMPCONVERTER_H
