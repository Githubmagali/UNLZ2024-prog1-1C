#include <iostream>


using namespace std;

int main() { 
      // Declara variables para almacenar la longitud en centímetros y metros
    double longitud_cm, longitud_m;

    // Ingresa la longitud en centímetros
    cout << "Ingresa la longitud en centimetros: ";
    cin >> longitud_cm;

    // Convierte centímetros a metros 
    longitud_m = longitud_cm / 100.0;

    // Muestra el resultado
    cout << "La longitud en metros es: " << longitud_m << " m" << endl;

    return 0;


}