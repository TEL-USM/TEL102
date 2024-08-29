#include <iostream>
#include <cstring>

// Pauta Control 1 Paralelo 201
// Descuentos por sintáxis o por no seguir instrucciones (cabecera de función, funcionamiento, etc.), según gravedad

struct student {
    char first_name[100];   // Primer nombre del estudiante
    char last_name[100];    // Apellido del estudiante
    int age;                // Edad del estudiante
    double grade;           // Calificación del estudiante
};

// 30pts - Pregunta 1
student createStudent() {
    // 10pts - Creación de elemento student
    student newStudent;
    // 10pts - Llenado de información correcto
    std::cout << "Ingrese el primer nombre del estudiante: ";
    std::cin >> newStudent.first_name;
    std::cout << "Ingrese el apellido del estudiante: ";
    std::cin >> newStudent.last_name;
    std::cout << "Ingrese la edad del estudiante: ";
    std::cin >> newStudent.age;
    std::cout << "Ingrese la calificación del estudiante: ";
    std::cin >> newStudent.grade;
    
    // 5pts - retorno de variable newStudent
    return newStudent;
}

// 20pts - Pregunta 2
void showStudentsInfo(student students[], int numStudents) {
    // 5pts - Estructura iterativa para recorrer los estudiantes (for-while-do while)
    for (int i = 0; i < numStudents; i++) { // 5pts - Utilización de la variable numStudents para obtener cantidad de estudiantes
        // 10pts - Se muestra información según lo solicitado
        std::cout << "Estudiante número " << i + 1 << std::endl;
        std::cout << "Nombre del estudiante: " << students[i].first_name << " " << students[i].last_name << std::endl; // Ojo que acá se muestra el nombre COMPLETO
        std::cout << "Edad del estudiante: " << students[i].age << std::endl;
        std::cout << "Calificación del estudiante: " << students[i].grade << std::endl;
    }
}

// 20pts - Pregunta 3
void bestGrade(student student1, student student2) {
    // 10pts - Comparación de grades para evaluar qué estudiante tiene mejor nota y estructura de ifs correcta 
    if (student1.grade > student2.grade) {
        // 10pts - Mensajes según cada caso y según lo solicitado
        std::cout << student1.first_name << " " << student1.last_name // Nuevamente, ojo con nombre COMPLETO 
        << " tiene una calificación superior a " << student2.first_name
        << " " << student2.last_name << std::endl;
    } else if (student1.grade < student2.grade) {
        std::cout << student2.first_name << " " << student2.last_name 
        << " tiene una calificación superior a " << student1.first_name
        << " " << student1.last_name << std::endl;
    } else {
        std::cout << student1.first_name << " " << student1.last_name <<
         " y " << student2.first_name << " " << student2.last_name  << 
         " tienen la misma calificación" << std::endl;
    }
}

int main() {
    // 30pts - Pregunta 4
    
    // 10pts - Creación de la variable arreglo de estudiantes con 5 espacios para estudiantes
    int numStudents = 5;
    student students[numStudents];

    // 10pts - Creación de estudiantes
    for (int i = 0; i < numStudents; i++) {
        students[i] = createStudent();
    }

    // 5pts - Se muestra información de estudiantes
    showStudentsInfo(students, numStudents);

    // 5pts - Se comparan el primer y segundo estudiante del arreglo
    bestGrade(students[0], students[1]);

    return 0;
}
