//
// Created by Abraham on 1/28/2026.
//

#include "Estudiante.h"

Estudiante::Estudiante(): Persona(){
    carrera = "";
    miHorario = new Horario();
}


Estudiante::Estudiante(int cedula, string nombre, string carrera) :Persona(cedula, nombre){
    this->carrera = carrera;
    miHorario = new Horario();
}
string Estudiante::getCarrera() const {
    return carrera;
}
void Estudiante::setCarrera(string carrera) {
    this->carrera = carrera;
}
string Estudiante::toString() const {
    stringstream ss;
    ss <<Persona::toString() <<endl
        <<"Carrera = "<<carrera<<endl;
    ss <<miHorario->toString() <<endl;
    return ss.str();
}

Estudiante::~Estudiante() {
    delete miHorario;
    miHorario = nullptr;
}
