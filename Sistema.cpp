//
// Created by Abraham on 1/28/2026.
//

#include "Sistema.h"
void Sistema::registrarEstudiante(int cedula, string nombre, string carrera) {
    Estudiante* nuevoEstudiante = new Estudiante(cedula, nombre, carrera);
    bool s = listaEstudiantes.agregarFinal(nuevoEstudiante);

    if (!s) {
        cout<<"No se pudo agregar, estudiante ya ingresado"<<endl;
    }
}

string Sistema::mostrarEstudiantes() const{
    stringstream ss;
    ss << listaEstudiantes.toString();
    return ss.str();
}
void Sistema::registrarProfesor(int cedula, string nombre, string materia) {
    Profesor* nuevoProfesor = new Profesor(cedula, nombre, materia);
    bool s = listaProfesors.agregarFinal(nuevoProfesor);

    if (!s) {
        cout<<"No se pudo agregar, profesor ya ingresado"<<endl;
    }
}

string Sistema::mostrarProfesores()const {
    stringstream ss;
    ss << listaProfesors.toString();
    return ss.str();
}

string Sistema::mostrarCursosDisponibles() {
    stringstream ss;
    ss<<listaCursos.toString();
    return ss.str();
}

void Sistema::escogerCursos(int cedula, string codCurso, int dia, int hora) {
    Persona* perry = listaEstudiantes.buscar(cedula);
    if (perry != nullptr) {
        Estudiante* Phineas
    }

}
