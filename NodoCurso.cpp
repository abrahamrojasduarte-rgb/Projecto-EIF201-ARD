//
// Created by Abraham on 2/4/2026.
//

#include "NodoCurso.h"

NodoCurso::NodoCurso(Curso *curso, NodoCurso *siguiente) {
    this->curso = curso;
    this->siguiente = siguiente;
}

NodoCurso * NodoCurso::getSiguiente() {
    return this->siguiente;
}

Curso * NodoCurso::getCurso() {
    return this->curso;
}

void NodoCurso::setSiguiente(NodoCurso *siguiente) {
    this->siguiente = siguiente;
}

NodoCurso::~NodoCurso() {
    delete curso;
    curso = nullptr;
    siguiente = nullptr;
}
