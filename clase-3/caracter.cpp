#include <iostream>
using namespace std;

int main() {
    char caracter;
    
    // Solicitar al usuario que ingrese un carácter
    cout << "Ingrese un caracter: ";
    cin >> caracter;
    

    
    // Verificar si el carácter es una vocal o una consonante
    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
        cout << "El caracter ingresado es una vocal" << endl;
    } else if (caracter >= 'a' && caracter <= 'z') {
        cout << "El caracter ingresado es una consonante" << endl;
    } else {
        cout << "El caracter ingresado no es una letra del alfabeto" << endl;
    }
    
    return 0;
}
