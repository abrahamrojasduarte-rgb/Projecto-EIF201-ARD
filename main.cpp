#include <iostream>
#include "Sistema.h"
#include "Profesor.h"
#include "Curso.h"

int main() {
    // Crear el sistema
    Sistema sistema;

    // Registrar algunos profesores
    Profesor* profesor1 = new Profesor(1, "Ana Rodríguez", "Matemáticas");
    Profesor* profesor2 = new Profesor(2, "Carlos Martíneez", "Física");
    sistema.registrarProfesor(profesor1->getCedula(), profesor1->getNombre(), profesor1->getMateria());
    sistema.registrarProfesor(profesor2->getCedula(), profesor2->getNombre(), profesor2->getMateria());

    // Mostrar los profesores registrados
    cout << "Profesores registrados:" << endl;
    cout<<sistema.mostrarProfesores();  // Mostrar profesores

    // Crear algunos cursos
    sistema.registrarCursos(1, "EIF-101", "Programación I");  // Profesor 1 (Ana Rodríguez) para "Programación I"
    sistema.registrarCursos(2, "EIF-102", "Estructuras de Datos");  // Profesor 2 (Carlos Martínez) para "Estructuras de Datos"

    // Mostrar los cursos registrados
    cout << "\nCursos registrados:" << endl;
    cout<<sistema.mostrarCursosDisponibles();  // Mostrar cursos

    // Limpiar memoria
    delete profesor1;
    delete profesor2;

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}