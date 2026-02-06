//
// Created by Abraham on 2/2/2026.
//

#include "Profesor.h"

Profesor::Profesor() : Persona() {
    materia = "";
}

Profesor::Profesor(int c, string n, string materia) : Persona(c,n) {
    this->materia = materia;
}

Profesor::~Profesor() {}

string Profesor::toString() const {
    stringstream ss;
    ss<<"Cedula = "<<getCedula()<<endl
        <<"Nombre = "<<getNombre()<<endl
        << "Materia = " <<materia << endl;
    return ss.str();
}

bool Profesor::esProfesor() const {
    return true;
}
string Profesor::getMateria()const {
    return materia;
}