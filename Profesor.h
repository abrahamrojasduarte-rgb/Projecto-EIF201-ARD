//
// Created by Abraham on 2/2/2026.
//

#ifndef MAIN_CPP_PROFESOR_H
#define MAIN_CPP_PROFESOR_H
#include "Persona.h"


class Profesor : public Persona{
private:
    string materia;
public:
    Profesor();
    Profesor(int,string, string materia);
    ~Profesor();
    string toString() const override;
    bool esProfessor() const override;
    string getMateria()const;
};


#endif //MAIN_CPP_PROFESOR_H