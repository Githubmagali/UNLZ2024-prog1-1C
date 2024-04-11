#include <iostream>


using namespace std;

int main() {
    // Declara de variables para almacenar las dimensiones del rectángulo
    double longitud, anchura;

    // Solicita al usuario que ingrese la longitud del rectángulo
    cout << "Ingresa la longitud del rectangulo: ";
    cin >> longitud;

    // Solicita al usuario que ingrese la anchura del rectángulo
    cout << "Ingresa la anchura del rectangulo: ";
    cin >> anchura;

    // Calcula el área del rectángulo
    double area = longitud * anchura;

    // Calcula el perímetro del rectángulo
    double perimetro = 2 * (longitud + anchura);

    // Muestra los resultados
    cout << "El area del rectangulo es: " << area << endl;
    cout << "El perimetro del rectangulo es: " << perimetro << endl;

    return 0;
}
