#include <iostream>
using namespace std;

int main() {
    int anio_nacimiento, anio_actual;
    
    // Solicitar al usuario que ingrese su año de nacimiento
    cout << "Ingrese su año de nacimiento: ";
    cin >> anio_nacimiento;

    // Solicitar al usuario que ingrese el año actual
    cout << "Ingrese el año actual: ";
    cin >> anio_actual;
    
    // Calcular la edad
    int edad = anio_actual - anio_nacimiento;
    
    // Verificar si la persona es mayor de edad
    if (edad >= 18) {
        cout << "La persona es mayor de edad" << endl;
    } else {
        cout << "La persona es menor de edad" << endl;
    }
    
    return 0;
}
