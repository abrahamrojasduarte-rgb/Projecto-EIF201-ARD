//
// Created by Abraham on 1/28/2026.
//

#include "Lista.h"
Lista::Lista() {
    this->cantidad = 0;
    this->primero = nullptr;
    this->ultimo = nullptr;
}

Lista::~Lista() {
    Nodo* aux = primero;
    while (aux != nullptr) {
        Nodo* temp = aux;
        aux = aux->getSiguiente();
        delete temp;
    }
    primero = nullptr;
    ultimo = nullptr;
    cantidad = 0;
}

bool Lista::vacia() {
    return primero==nullptr;
}

bool Lista::agregarInicio(Persona* persona) {
    if (persona == nullptr) {
        return false;
    }
    if (buscar(persona->getCedula()) != nullptr) {
        delete persona;
        return false;
    }
    Nodo* nuevo = new Nodo(persona, primero);
    if (vacia()) {
        ultimo = nuevo;
    }
    primero = nuevo;
    cantidad++;
    return true;
}

bool Lista::agregarFinal(Persona* persona) {
    if (persona == nullptr) {
        return false;
    }
    if (buscar(persona->getCedula()) != nullptr) {
        delete persona;
        return false;
    }
    Nodo* nuevo = new Nodo(persona, nullptr);
    if (vacia()) {
        primero = nuevo;
        ultimo = nuevo;
    }else {
        ultimo->setSiguiente(nuevo);
        ultimo = nuevo;
    }
    cantidad++;
    return true;
}


string Lista::toString() const{
    stringstream ss;
    Nodo* actual = primero;

    while (actual != nullptr) {
        ss << actual->getPersona()->toString() << "---"<<endl;
        actual = actual->getSiguiente();
    }

    return ss.str();
}

bool Lista::eliminar(int cedula) {
    if (vacia()) {
        return false;
    }
    if (primero->getPersona()->getCedula() == cedula) {
        Nodo* borrar = primero;
        primero = primero->getSiguiente();
        if (primero == nullptr) {
            ultimo = nullptr;
        }
        delete borrar;
        cantidad--;
        return true;
    }

    Nodo* aux = primero;
    while (aux->getSiguiente() != nullptr) {
        if (aux->getSiguiente()->getPersona()->getCedula() == cedula) {
            Nodo* borrar = aux->getSiguiente();
            aux->setSiguiente(borrar->getSiguiente());

            if (borrar == ultimo) {
                ultimo = aux;
            }

            delete borrar;
            cantidad--;
            return true;
        }
        aux = aux->getSiguiente();
    }

    return false;
}
Persona* Lista::buscar(int cedula) const {
    Nodo* actual = primero;
    while (actual != nullptr) {
        if (actual->getPersona()->getCedula() == cedula) {
            return actual->getPersona();
        }
        actual = actual->getSiguiente();
    }
    return nullptr;
}