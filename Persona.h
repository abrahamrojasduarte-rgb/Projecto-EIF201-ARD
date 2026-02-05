//
// Created by Abraham on 1/23/2026.
//

#ifndef PROYECTO_EIF201_ABRAHAM_PERSONA_H
#define PROYECTO_EIF201_ABRAHAM_PERSONA_H
#include <iostream>
#include <sstream>
using namespace std;

class Persona {
protected:
    int cedula;
    string nombre;

public:
    Persona();
    Persona(int cedula, string nombre);
    virtual ~Persona();

    int getCedula() const;
    void setCedula(int cedula);
    string getNombre() const;
    void setNombre(const string& nombre);

    virtual string toString() const;
    virtual bool esEstudiante() const;
};


#endif //PROYECTO_EIF201_ABRAHAM_PERSONA_H