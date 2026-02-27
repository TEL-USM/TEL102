#include "oxygenhistory.h"

OxygenHistory::OxygenHistory(QObject *parent)
    : QObject(parent)
{}

void OxygenHistory::addValue(float value){
    m_values.push_back(value);

    if (m_values.size() > MAX_VALUES) {
        // Eliminar el valor más antiguo
        m_values.erase(m_values.begin());
    }

    emit historyChanged();
}

int OxygenHistory::count(){
    return m_values.size();
}

float OxygenHistory::valueAt(int index){
    if (index < 0 || index >= count()) {
        // En una app real podrías manejar esto distinto,
        // pero para el control asumimos índice válido.
        return 0.0f;
    }
    return m_values[index];
}

void OxygenHistory::onOxygenPercentChanged(int value){
    // Convertimos int a float antes de guardar.
    addValue(value);
}
