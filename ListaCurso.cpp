//
// Created by Abraham on 2/4/2026.
//

#include "ListaCurso.h"
bool ListaCurso::vacia() const{
    return primero == nullptr;
}

bool ListaCurso::estaRepetido(string codigo) {
    NodoCurso* actual = primero;
    while (actual != nullptr) {
        if (actual->getCurso()->getCodigo() == codigo) {
            return true;
        }
        actual = actual->getSiguiente();
    }
    return false;
}

bool ListaCurso::agregarFinal(Curso *curso) {
    if (curso == nullptr) {
        return false;
    }
    if (estaRepetido(curso->getCodigo())) {
        return false;
    }
    NodoCurso* nuevoN = new NodoCurso(curso, nullptr);
    if (vacia()) {
        primero = nuevoN;
        ultimo = nuevoN;
    }else {
        ultimo->setSiguiente(nuevoN);
        ultimo = nuevoN;
    }
    cantidad++;
    return true;
}

Curso * ListaCurso::buscarC(string codigo) const {
    if (vacia()) {
        return nullptr;
    }
    NodoCurso* actual = primero;
    while (actual != nullptr) {
        if (actual->getCurso()->getCodigo() == codigo) {
            return actual->getCurso();
        }
        actual = actual->getSiguiente();
    }
    return nullptr;
}

bool ListaCurso::eliminarC(string codigo) {
    if (vacia()) {
        return false;
    }
    if (primero->getCurso()->getCodigo() == codigo) {
        NodoCurso* borrar = primero;
        primero = primero->getSiguiente();
        if (primero == nullptr) {
            ultimo = nullptr;
        }
        delete borrar;
        cantidad--;
        return true;
    }
    NodoCurso* actual = primero;
    while (actual->getSiguiente() != nullptr) {
        if (actual->getSiguiente()->getCurso()->getCodigo() == codigo) {
            NodoCurso* borrar = actual->getSiguiente();
            actual->setSiguiente(borrar->getSiguiente());
            if (borrar == ultimo) {
                ultimo = actual;
            }
            delete borrar;
            cantidad--;
            return true;
        }
        actual = actual->getSiguiente();
    }
    return false;
}

string ListaCurso::toString() const {
    stringstream ss;
    NodoCurso* actual = primero;
    while (actual != nullptr) {
        ss << actual->getCurso() << "   \n";
    }
    return ss.str();
}
