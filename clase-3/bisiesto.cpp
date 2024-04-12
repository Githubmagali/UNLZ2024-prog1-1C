#include <iostream>
using namespace std;

int main() {
    int anio;
    
    // Solicitar al usuario que ingrese el año
    cout << "Ingrese un año: ";
    cin >> anio;
    
  
    if (anio % 400 == 0) {
        cout << anio << " es un año bisiesto" << endl;
    } else {
        cout << anio << " no es un año bisiesto" << endl;
    }
    
    return 0;
}
