//
// Created by Abraham on 1/28/2026.
//

#include "Nodo.h"

Nodo::Nodo() {
    this->siguiente = nullptr;
    this->persona = nullptr;
}

Nodo::Nodo(Persona *persona, Nodo *siguiente) {
    this ->persona = persona;
    this -> siguiente = siguiente;
}
void Nodo::setPersona(Persona* persona) {
    this->persona = persona;
}

Persona* Nodo::getPersona() const {
    return persona;
}

void Nodo::setSiguiente(Nodo* siguiente) {
    this->siguiente = siguiente;
}

Nodo* Nodo::getSiguiente() const {
    return siguiente;
}
