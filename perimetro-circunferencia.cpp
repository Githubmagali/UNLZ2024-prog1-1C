#include <iostream>

using namespace std;

int main() {
 
    const double PI = 3.141592;

    // Declara la variable para almacenar el radio de la circunferencia
    double radio;

    // Solicita al usuario que ingrese el radio de la circunferencia
    cout << "Ingresa el radio de la circunferencia: ";
    cin >> radio;

    // Calcula el area de la circunferencia
    double area = PI * radio * radio;

    // Calcula el perímetro de la circunferencia
    double perimetro = 2 * PI * radio;

  
    cout << "El area de la circunferencia es: " << area << endl;
    cout << "El perimetro de la circunferencia es: " << perimetro << endl;

    return 0;
}
