//
// Created by Abraham on 1/28/2026.
//

#ifndef MAIN_CPP_SISTEMA_H
#define MAIN_CPP_SISTEMA_H
#include "Lista.h"
#include "Estudiante.h"
#include "Profesor.h"

class Sistema {
private:
    Lista listaEstudiantes;
    Lista listaProfesors;
public:
    void registrarEstudiante(int cedula, string nombre, string carrera);
    string mostrarEstudiantes()const;
    void registrarProfesor(int cedula, string nombre, string materia);
    string mostrarProfesores() const;
};


#endif //MAIN_CPP_SISTEMA_H