#include <iostream>
#include <cstring>


struct employee{
    int id; // Identificador de empleado
    char nombre[100]; // Nombre del empleado
    int n_dias; // Cantidad de registros de horas
    int *horas_trabajadas; // Horas trabajadas
};

// 30pts - Pregunta 1
// 5pts - Sintáxis y formato
employee createEmployee(){
    // 10pts - Solicitud de información general y creación de empleado
    employee empleado;
    std::cout << "Ingrese nombre del empleado: ";
    std::cin.getline(empleado.nombre, 100, '\n');
    std::cout << "Ingrese identificación del empleado: ";
    std::cin >> empleado.id;
    std::cout << "Ingrese la cantidad de días trabajados: ";
    std::cin >> empleado.n_dias;
    empleado.horas_trabajadas = new int[empleado.n_dias];
    // 10pts - Creación de arreglo de horas trabajadas en memoria dinámica
    for(int i=0; i<empleado.n_dias;i++){
        std::cout << "Ingrese Horas trabajadas el día " << i + 1 << ": ";
        std::cin >> empleado.horas_trabajadas[i];
        std::cin.ignore();
    }
    
    // 5pts - Retorno correcto
    return empleado;
}

// 20pts - Pregunta 2
// 5pts - Sintáxis 
void updateHours(employee &empleado, int dia, int new_hours ){
    // 5pts - Verificación de posición válida
    if(0<dia<=empleado.n_dias)
        // 10pts - Modificación de horas trabajadas en posición correcta
        empleado.horas_trabajadas[dia-1] = new_hours;
}

// 20pts - Pregunta 3
// 5pts - Sintáxis y formato
void showEmployeesInfo(employee *empleados, int n_empleados){
    // 5pts - Muestra información general de arreglo de empleados
    std::cout << "Información de empleados" << std::endl;
    for(int i=0; i<n_empleados; i++){
        std::cout << "Empleado " << i + 1 << std::endl;
        std::cout << "Nombre del empleado: " << empleados[i].nombre << std::endl;
        std::cout << "Identificador del empleado: " << empleados[i].id << std::endl;
        std::cout << "Cantidad de días trabajados: " << empleados[i].n_dias << std::endl;
        std::cout << "Horas trabajadas por día: ";
        // 10pts - Muestra información de horas trabajadas de cada empleado
        for(int j = 0; j<empleados[i].n_dias; j++){
            std::cout<<empleados[i].horas_trabajadas[j]<<" ";
        }
        std::cout << std::endl;
    }
}

// 30pts - Pregunta 4
// 5pts - Sintáxis y formato
int main(){
    // 5pts - Crea arreglo solicitado en memoria dinámica
    int n_empleados = 3;
    employee *empleados = new employee[n_empleados];

    // 5pts - Llena la información de cada empleado utilizando 
    // la función createEmployee()
    for(int i=0; i<n_empleados; i++){
        empleados[i] = createEmployee();
    }

    // 10pts - Solicita información para actualización de horas y realiza actualización
    // No es necesario que sea tal cual como aparece acá. Si el alumno desea
    // crear una nueva función para este proceso de actualización, también es correcto
    std::cout << "Actualización de horas trabajadas" << std::endl;
    int id, dia, new_hours;
    std::cout<< "Ingrese id del empleado: ";
    std::cin >> id;
    std::cout<< "Ingrese día trabajado: ";
    std::cin >> dia;
    std::cout << "Ingrese nueva cantidad de horas trabajadas: ";
    std::cin >> new_hours; 

    for(int i=0; i<n_empleados; i++){
        if(empleados[i].id==id){
            updateHours(empleados[i], dia, new_hours);
            break;
        }
    }
       
    // 5pts - Muestra la información final de los empleados
    showEmployeesInfo(empleados, n_empleados);

    return 0;
}


