//
// Created by Abraham on 1/28/2026.
//

#ifndef MAIN_CPP_NODO_H
#define MAIN_CPP_NODO_H
#include "Persona.h"

class Nodo {
private:
    Persona *persona;
    Nodo* siguiente;
public:
    Nodo();
    Nodo(Persona *persona, Nodo *siguiente);
    ~Nodo();
    void setPersona(Persona *persona);
    void setSiguiente(Nodo *siguiente);
    Nodo* getSiguiente() const;
    Persona* getPersona() const;
};


#endif //MAIN_CPP_NODO_H