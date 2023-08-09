#include "Counter.h"

void Counter::setValue(int value){
    if(value != m_value){
        m_value = value;
        emit valueChanged(value);
    }
}
