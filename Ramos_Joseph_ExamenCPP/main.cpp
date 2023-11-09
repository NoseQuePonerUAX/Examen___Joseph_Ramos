#include <iostream>
#include "Estudiante.h"

using namespace std;

int suma(int a, int b) {
    return a + b;
}
double dividir(int a, int b) {
    return a / b;
}

void trade(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

double safeDivide(double c, double d) {
    if(d == 0) {
        throw "Error al dividir entre 0 ";
    }
    return c / d;
}
double calcularPromedio(const vector<int>& calificaciones) {
    if (calificaciones.empty()) {
        return 0.0;
    }
    int suma = 0;
    for (int calificacion : calificaciones) {
        suma += calificacion;
    }
    return static_cast<double>(suma) / calificaciones.size();
}
int main() {

    int a = 10;
    int b = 5;
    double c = 10;
    double d = 0;

    int resultadoSuma = suma(a, b);
    cout << "El resultado de " << a << " + " << b << " es: " << resultadoSuma << endl;

    Estudiante estudiante1;
    estudiante1.nombre = "Joseph";
    estudiante1.edad = 20;
    estudiante1.grado = "Ingenieria Informatica";
    estudiante1.mostrar_info();

    int *ptr_a = &a;
    int *ptr_b = &b;
    cout << "Valores iniciales de " << a << " y " << b << endl;
    trade(ptr_a, ptr_b);
    cout << "Valores finales de " << a << " y " << b << endl;

    try{
        double resultadoDivision = safeDivide(c, d);
        cout << "El resultado de dividir " << c << " entre " << d << " es: " << endl;
    } catch (const char* error) {
        cerr << "Error encontrado: " << error << endl;
    }
    vector<int> notas = {95, 75, 60, 80, 30};
    double promedio = calcularPromedio(notas);
    cout << "El promedio de notas es: " << promedio << endl;

    return 0;
}
