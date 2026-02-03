//
// Created by Abraham on 2/3/2026.
//

#include "Curso.h"

Curso::Curso(string codigo, string nombre, Profesor *profesorAsignado) {
    this->codigo = codigo;
    this->nombre = nombre;
    this->profesorAsignado = profesorAsignado;
}

Curso::~Curso() {}

string Curso::getCodigo() const {
    return this->codigo;
}

string Curso::getNombre() const {
    return this->nombre;
}

Profesor * Curso::getProfesor() const {
    return this->profesorAsignado;
}

void Curso::setNombre(string nombre) {
    this->nombre = nombre;
}

bool Curso::setProfesor(Profesor *profesor) {
    if (profesor != nullptr) {
        this->profesorAsignado = profesor;
        return true;
    }else {
        return false;
    }
}

string Curso::toString() const {
    stringstream ss;
    ss<<"Nombre :"<<this->nombre<<endl
        <<"Codigo :"<<this->codigo<<endl;
    if (profesorAsignado != nullptr) {
        ss << "Profesor asignado:\n"
           << profesorAsignado->toString();
    } else {
        ss << "Profesor asignado: (no asignado)\n";
    }
    return ss.str();
}
