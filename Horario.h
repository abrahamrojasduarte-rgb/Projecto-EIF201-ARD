//
// Created by Abraham on 2/4/2026.
//

#ifndef MAIN_CPP_HORARIO_H
#define MAIN_CPP_HORARIO_H
#include "Curso.h"
#include <iostream>
using namespace std;

class Horario {
private:
    Curso*** matriz;
    int dias;
    int horas;
public:
    Horario();
    ~Horario();
    void liberarMemoria();
    bool asignarCurso(Curso* curso, int dia, int hora);
    Curso* getCurso(int dia, int hora)const;
    string toString()const;
    bool indicesValidos(int dia, int hora)const;
};


#endif //MAIN_CPP_HORARIO_H