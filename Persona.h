//
// Created by Abraham on 1/23/2026.
//

#ifndef PROYECTO_EIF201_ABRAHAM_PERSONA_H
#define PROYECTO_EIF201_ABRAHAM_PERSONA_H
#include <iostream>
#include <sstream>
using namespace std;

class Persona {
    private:
    int cedula;
    string nombre;
    public:
    Persona();
    Persona(int cedula, string nombre);
    int getCedula() const;
    void setCedula(int cedula);

    string getNombre() const;
    void setNombre(const string& nombre);

    string toString() const;

    ~Persona();
};


#endif //PROYECTO_EIF201_ABRAHAM_PERSONA_H