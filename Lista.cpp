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

void Lista::agregarInicio(Persona* persona) {
    Nodo* nuevo = new Nodo(persona, primero);
    if (vacia()) {
        ultimo = nuevo;
    }
    primero = nuevo;
    cantidad++;
}

void Lista::agregarFinal(Persona* persona) {
    Nodo* nuevo = new Nodo(persona, nullptr);
    if (vacia()) {
        this->agregarInicio(persona);
    }else {
        ultimo->setSiguiente(nuevo);
        ultimo = ultimo->getSiguiente();
        cantidad++;
    }
}

bool Lista::eliminaInicio() {
return false;
}

bool Lista::eliminaFinal() {
return false;
}

string Lista::toString() {
    stringstream ss;
    Nodo* actual = primero;

    while (actual != nullptr) {
        ss << actual->getPersona()->toString() << endl;
        if (actual->getSiguiente() != nullptr) {
            ss << " -> ";
        }
        actual = actual->getSiguiente();
    }

    return ss.str();
}

void Lista::eliminar(int cedula) {

}

bool Lista::buscar(int cedula) {
    Nodo* actual = primero;
    while (actual != nullptr) {
        if (actual->getPersona()->getCedula() == cedula) {
            return true;
        }
        actual = actual->getSiguiente();
    }
    return false;
}