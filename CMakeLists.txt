cmake_minimum_required(VERSION 4.1)
project(Proyecto_EIF201_Abraham)

set(CMAKE_CXX_STANDARD 20)

add_executable(Proyecto_EIF201_Abraham main.cpp
        Persona.cpp
        Persona.h
        Estudiante.cpp
        Estudiante.h
        Nodo.cpp
        Nodo.h
        Lista.cpp
        Lista.h)
