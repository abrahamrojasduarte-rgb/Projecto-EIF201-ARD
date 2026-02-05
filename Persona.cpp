//
// Created by Abraham on 1/23/2026.
//

#include "Persona.h"
Persona::Persona() {
    this->cedula = 0;
    this->nombre = "";
}

Persona::Persona(int cedula, string nombre){
    this->cedula = cedula;
    this->nombre = nombre;
}


int Persona::getCedula() const {
    return cedula;
}

void Persona::setCedula(int cedula) {
    this->cedula = cedula;
}

string Persona::getNombre() const {
    return nombre;
}

void Persona::setNombre(const string& nombre) {
    this->nombre = nombre;
}

Persona::~Persona() {
}
string Persona::toString() const {
    stringstream ss;
    ss<<"Cedula = "<<cedula<<endl
        <<"Nombre = "<<nombre<<endl;
    return ss.str();
}

bool Persona::esEstudiante() const {
    return false;
}
