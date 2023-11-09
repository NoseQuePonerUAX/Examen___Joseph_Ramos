#ifndef RAMOS_JOSEPH_EXAMENCPP_ESTUDIANTE_H
#define RAMOS_JOSEPH_EXAMENCPP_ESTUDIANTE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Estudiante {
public:
    string nombre;
    int edad;
    string grado;
    vector<string> materias;

    void mostrar_info();
    void registrar_materia(const string& materia);
    void mostrar_materias();
};

#endif //RAMOS_JOSEPH_EXAMENCPP_ESTUDIANTE_H
