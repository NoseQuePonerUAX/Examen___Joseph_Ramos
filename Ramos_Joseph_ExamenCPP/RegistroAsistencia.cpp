#include "RegistroAsistencia.h"

RegistroAsistencia::RegistroAsistencia(const std::string& fecha, const string& estado)
:fecha (fecha), estado(estado) {}

void RegistroAsistencia::mostrar_asistencia() const {
    cout << "Fecha de la clase: " << fecha << endl;
    cout << "Estado de asistencia: " << estado << endl;
}