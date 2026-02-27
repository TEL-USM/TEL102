#include "temphistory.h"

TempHistory::TempHistory(QObject *parent)
    : QObject(parent)
{}

int TempHistory::count()  {
    return (int)m_values.size();
}

float TempHistory::valueAt(int index)  {
    return m_values[index];
}

void TempHistory::addTemperatureCelsius(int value) {
    float c = (float)value;
    m_values.push_back(c);

    if (m_values.size() > 10)
        m_values.erase(m_values.begin());

    emit historyChanged();
}
