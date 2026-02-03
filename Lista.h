//
// Created by Abraham on 1/28/2026.
//

#ifndef MAIN_CPP_LISTA_H
#define MAIN_CPP_LISTA_H
#include "Persona.h"
#include "Nodo.h"
#include<iostream>
using namespace std;

class Lista {
private:
    Nodo* ultimo;
    Nodo* primero;
    int cantidad;
public:
    Lista();
    ~Lista();
    bool vacia();
    bool agregarInicio(Persona* persona);
    bool agregarFinal(Persona* persona);
    string toString() const;
    bool eliminar(int cedula);
    Persona* buscar(int cedula)const ;
};



#endif //MAIN_CPP_LISTA_H
