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
    ss << Persona::toString() << endl;
    ss << "Materia " <<materia << endl;
    return ss.str();
}
