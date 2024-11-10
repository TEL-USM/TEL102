#include "user.h"
#include <iostream>

int main() {
    // Creación de un usuario
    User user("Alice");

    // Creación de una lista de tareas
    TaskList taskList("Tareas Personales");
    
    // Creación de tareas y asignación a la lista
    Task task1("Comprar víveres", "2023-11-01", false);
    Task task2("Hacer ejercicio", "2023-11-05", false);
    
    taskList.addTask(task1);
    taskList.addTask(task2);
    
    // Asignación de la lista al usuario
    user.assignTaskList(taskList);
    
    // Mostrar información de tareas del usuario
    user.showTaskInfo();

    int index;
    std::cout << "Ingrese índice de tarea  actualizar" << std::endl;
    std::cin >> index;
    user.completedTask(index);
    user.showTaskInfo(); 

    
    return 0;
}