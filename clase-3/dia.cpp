#include <iostream>
using namespace std;

int main() {
    int numero;
    
    // Solicitar al usuario que ingrese un número del 1 al 7
    cout << "Ingrese un numero del 1 al 7: ";
    cin >> numero;
    
    // Imprimir el día de la semana correspondiente
    switch (numero) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miércoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sábado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
        default:
            cout << "Numero invalido. Por favor ingrese un numero del 1 al 7." << endl;
    }
    
    return 0;
}
