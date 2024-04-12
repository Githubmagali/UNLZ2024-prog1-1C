#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char operacion;
    
    // Solicitar al usuario que ingrese dos números
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    
    // Solicitar al usuario que seleccione una operación
    cout << "Seleccione la operacion (+ para suma, - para resta, * para multiplicacion, / para division): ";
    cin >> operacion;
    
    // Realizar la operación seleccionada y mostrar el resultado
    switch (operacion) {
        case '+':
            cout << "El resultado de la suma es: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "El resultado de la resta es: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "El resultado de la multiplicacion es: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "El resultado de la division es: " << num1 / num2 << endl;
            } else {
                cout << "No es posible dividir entre cero." << endl;
            }
            break;
        default:
            cout << "Operacion no valida." << endl;
    }
    
    return 0;
}
