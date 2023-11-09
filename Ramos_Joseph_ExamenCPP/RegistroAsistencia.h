#ifndef RAMOS_JOSEPH_EXAMENCPP_REGISTROASISTENCIA_H
#define RAMOS_JOSEPH_EXAMENCPP_REGISTROASISTENCIA_H

#include <iostream>
#include <string>

using namespace std;
class RegistroAsistencia {

private:
    string fecha;
    string estado;

public:
    RegistroAsistencia(const string& fecha, const string& estado);
    void mostrar_asistencia() const;
};


#endif //RAMOS_JOSEPH_EXAMENCPP_REGISTROASISTENCIA_H
