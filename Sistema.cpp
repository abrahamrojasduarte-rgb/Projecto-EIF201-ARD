//
// Created by Abraham on 1/28/2026.
//

#include "Sistema.h"
void Sistema::registrarEstudiante(int cedula, string nombre, string carrera) {
    Estudiante* nuevoEstudiante = new Estudiante(cedula, nombre, carrera);
    listaEstudiantes.agregarFinal(nuevoEstudiante);  // Añadimos al final de la lista
}

void Sistema::mostrarEstudiantes() {
    cout << listaEstudiantes.toString();  // Muestra todos los estudiantes registrados
}