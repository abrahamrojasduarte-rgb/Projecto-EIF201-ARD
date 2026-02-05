//
// Created by Abraham on 2/4/2026.
//

#ifndef MAIN_CPP_LISTACURSO_H
#define MAIN_CPP_LISTACURSO_H
#include "NodoCurso.h"
#include <iostream>
using namespace std;

class ListaCurso {
private:
    NodoCurso* primero;
    NodoCurso* ultimo;
    int cantidad;
public:
    bool vacia()const;
    bool estaRepetido(string codigo);
    bool agregarFinal(Curso* curso);
    Curso* buscarC(string codigo)const;
    bool eliminarC(string codigo);
    string toString()const;
};


#endif //MAIN_CPP_LISTACURSO_H