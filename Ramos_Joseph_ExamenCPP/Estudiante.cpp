#include "Estudiante.h"

void Estudiante::mostrar_info() {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << " anos" << endl;
    cout << "Grado: " << grado << endl;
}
void Estudiante::registrar_materia(const string& materia) {
    materias.push_back(materia);
}
void Estudiante::mostrar_materias() {
    cout << "Materias registradas para " << nombre << " : "  << endl;
    for(const auto& materia : materias) {
        cout << "- " << materia << endl;
    }
}