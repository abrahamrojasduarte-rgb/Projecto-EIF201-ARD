//
// Created by Abraham on 1/28/2026.
//

#ifndef MAIN_CPP_SISTEMA_H
#define MAIN_CPP_SISTEMA_H
#include "Lista.h"
#include "Estudiante.h"

class Sistema {
private:
    Lista listaEstudiantes;

public:
    void registrarEstudiante(int cedula, string nombre, string carrera);
    void mostrarEstudiantes();
};


#endif //MAIN_CPP_SISTEMA_H