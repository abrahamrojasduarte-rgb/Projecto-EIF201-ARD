//
// Created by Abraham on 1/28/2026.
//

#include "Sistema.h"
void Sistema::registrarEstudiante(int cedula, string nombre, string carrera) {
    Estudiante* nuevoEstudiante = new Estudiante(cedula, nombre, carrera);
    bool s = listaEstudiantes.agregarFinal(nuevoEstudiante);

    if (!s) {
        cout<<"No se pudo agregar, estudiante ya ingresado"<<endl;
    }
}

string Sistema::mostrarEstudiantes() const{
    stringstream ss;
    ss << listaEstudiantes.toString();
    return ss.str();
}
void Sistema::registrarProfesor(int cedula, string nombre, string materia) {
    Profesor* nuevoProfesor = new Profesor(cedula, nombre, materia);
    bool s = listaProfesors.agregarFinal(nuevoProfesor);

    if (!s) {
        cout<<"No se pudo agregar, profesor ya ingresado"<<endl;
    }
}

string Sistema::mostrarProfesores()const {
    stringstream ss;
    ss << listaProfesors.toString();
    return ss.str();
}


void Sistema::escogerCursos(int cedulaE, string codCurso, int dia, int hora) {
    Persona* perry = listaEstudiantes.buscar(cedulaE);
    if (perry != nullptr) {
        if (perry->esEstudiante()) {
            Estudiante* Phineas = (Estudiante*)perry;
            Curso* verano = listaCursos.buscarC(codCurso);
            if (verano != nullptr) {
                if (Phineas->getHorario()->asignarCurso(verano, dia, hora)) {
                    cout<<"Si pudo bro, curso asignado "<<endl;
                }else {
                    cout<<":( Horario ocupado :("<<endl;
                }
            }else {
                cout<<"Curso invalido "<<endl;
            }
        }else {
            cout<<"Estudiante invalido "<<endl;
        }
    }
}

string Sistema::mostrarCursosDisponibles()const {
    stringstream ss;
    ss << listaCursos.toString();
    return ss.str();
}

void Sistema::registrarCursos(int cedulaP, string codCurso, string nomCurso) {
    /*Persona* Ferb = listaProfesors.buscar(cedulaP);
    if (Ferb != nullptr && Ferb->esProfesor()) {
        Profesor* candace = (Profesor*)Ferb;
        Curso* funda = new Curso(codCurso, nomCurso, candace);
        if (listaCursos.agregarFinal(funda)) {
            cout<<"Curso agregado :)"<<endl;
        }else {
            cout<<"Curso no se puedo agregar :( "<<endl;
        }
    }else {
        cout<<"Profesor invalido "<<endl;
    }*/
    Persona* persona = listaProfesors.buscar(cedulaP);  // Obtener el puntero a Persona (que es Profesor)

    if (persona != nullptr && persona->esProfesor()) {  // Verificamos que es un Profesor
        Profesor* profesor = (Profesor*) persona;  // Ahora sabemos que es un Profesor

        // Crear el curso con el profesor asignado
        Curso* nuevoCurso = new Curso(codCurso, nomCurso, profesor);

        // Agregar el curso a la lista de cursos
        if (listaCursos.agregarFinalC(nuevoCurso)) {
            cout << "Curso agregado :)" << endl;
        } else {
            cout << "Curso no se pudo agregar :( " << endl;
        }
    } else {
        cout << "Profesor inválido." << endl;
    }
}

