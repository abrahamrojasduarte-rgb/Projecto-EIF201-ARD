//
// Created by Abraham on 2/4/2026.
//

#ifndef MAIN_CPP_NODOCURSO_H
#define MAIN_CPP_NODOCURSO_H
#include "Curso.h"
#include <sstream>
using namespace std;
class NodoCurso {
private:
    Curso* curso;
    NodoCurso* siguiente;
public:
    NodoCurso(Curso* curso, NodoCurso* siguiente);
    NodoCurso* getSiguiente();
    Curso* getCurso();
    void setSiguiente(NodoCurso* siguiente);
    ~NodoCurso();
};


#endif //MAIN_CPP_NODOCURSO_H