//
// Created by Abraham on 1/28/2026.
//

#ifndef MAIN_CPP_ESTUDIANTE_H
#define MAIN_CPP_ESTUDIANTE_H
#include "Persona.h"


class Estudiante: public Persona {
private:
    string carrera;
public:
    Estudiante();
    Estudiante(int cedula, string nombre, string carrera);
    ~Estudiante() override;
    string getCarrera() const;
    void setCarrera(string carrera);
    string toString() const override;
};


#endif //MAIN_CPP_ESTUDIANTE_H