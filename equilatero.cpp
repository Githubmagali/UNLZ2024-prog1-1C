#include <iostream>
#include <cmath> 

using namespace std;

int main()
{
    double lado;

    // Solicita al usuario que ingrese la longitud del lado del triángulo
    cout << "Ingresa la longitud del lado del triangulo equilatero: ";
    cin >> lado;

    // Calcula el área del triángulo equilátero
    double area = (sqrt(3) / 4) * lado * lado;

    // Calcula el perímetro del triángulo equilátero
    double perimetro = 3 * lado;

    // Muestra los resultados
    cout << "El area del triangulo equilatero es: " << area << endl;
    cout << "El perimetro del triangulo equilatero es: " << perimetro << endl;

    return 0;
}
