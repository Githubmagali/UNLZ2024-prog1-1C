#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    
    // Solicitar al usuario que ingrese tres números enteros
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;
    
    // Encontrar el número mayor
    int mayor = num1; // Supongamos que num1 es el mayor inicialmente
    
    if (num2 > mayor) {
        mayor = num2;
    }
    
    if (num3 > mayor) {
        mayor = num3;
    }
    
    // Imprimir el número mayor
    cout << "El numero mayor es: " << mayor << endl;
    
    return 0;
}
