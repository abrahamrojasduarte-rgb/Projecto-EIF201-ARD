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
    void setNombre(const string& nom);

    virtual string toString() const = 0 ;
    virtual bool esEstudiante() const;
    virtual bool esProfesor() const;
};


#endif //PROYECTO_EIF201_ABRAHAM_PERSONA_H