//
// Created by Abraham on 2/3/2026.
//

#ifndef MAIN_CPP_CURSO_H
#define MAIN_CPP_CURSO_H
#include "Profesor.h"
#include <iostream>

using namespace std;
class Curso {
private:
    string codigo;
    string nombre;
    Profesor *profesorAsignado;
public:
    Curso(string codigo, string nombre, Profesor* profesorAsignado);
    ~Curso();
    string getCodigo() const;
    string getNombre() const;
    Profesor* getProfesor() const;

    void setNombre(string nombre);
    bool setProfesor(Profesor* profesor);

    string toString() const;
};


#endif //MAIN_CPP_CURSO_H