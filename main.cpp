#include <iostream>
#include"Sistema.h"
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    Sistema sistema;


    sistema.registrarEstudiante(12345, "Juan Pérez", "Ingeniería en Sistemas");
    sistema.registrarEstudiante(67890, "Ana González", "Matemáticas");

    sistema.mostrarEstudiantes();

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}