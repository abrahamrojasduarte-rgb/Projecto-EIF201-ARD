//
// Created by Abraham on 1/28/2026.
//

#ifndef MAIN_CPP_SISTEMA_H
#define MAIN_CPP_SISTEMA_H
#include "Persona.h"
#include "Lista.h"
#include "Estudiante.h"
#include "Profesor.h"
#include "ListaCurso.h"

class Sistema {
private:
    Lista listaEstudiantes;
    Lista listaProfesors;
    ListaCurso listaCursos;
public:
    void registrarEstudiante(int cedula, string nombre, string carrera);
    string mostrarEstudiantes()const;

    void registrarProfesor(int cedulaP, string nombre, string materia);
    string mostrarProfesores() const;

    void escogerCursos(int cedulaE, string codCurso, int dia, int hora);
    string mostrarCursosDisponibles() const;
    void registrarCursos(int cedulaP, string codCurso, string nomCurso);
};


#endif //MAIN_CPP_SISTEMA_H