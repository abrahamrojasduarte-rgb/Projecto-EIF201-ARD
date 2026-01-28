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
    void agregarInicio(Persona* persona);
    void agregarFinal(Persona* persona);
    bool eliminaInicio();
    bool eliminaFinal();
    string toString();
    void eliminar(int cedula);
    bool buscar(int cedula);
};



#endif //MAIN_CPP_LISTA_H
