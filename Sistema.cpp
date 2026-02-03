//
// Created by Abraham on 1/28/2026.
//

#include "Sistema.h"
void Sistema::registrarEstudiante(int cedula, string nombre, string carrera) {
    Estudiante* nuevoEstudiante = new Estudiante(cedula, nombre, carrera);\
    bool s = listaEstudiantes.agregarFinal(nuevoEstudiante);

    if (!s) {
        cout<<"No se pudo agregar, estudiante ya ingresado"<<endl;
    }
}

void Sistema::mostrarEstudiantes() {
    cout << listaEstudiantes.toString();
}