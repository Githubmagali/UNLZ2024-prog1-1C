#include <iostream>
#include <string>

using namespace std;

int main() {
    int opcion = 1;
    int contador = 0;
    int acumulador = 0;
    int ingresoAAcumular = 0;
    int cantidad = 0;

    cout << "Ingrese la cantidad de ciclos que espera que se itere: ";
    cin >> opcion;

    while (contador < opcion) {
        contador = contador + 1;
        acumulador = acumulador + contador;

        cout << "Cantidad de veces que se repite el ciclo: " << contador << endl;
        cout << "Valor temporal del acumulador: " << acumulador << endl;
        cout << "Ingrese un valor a acumular: ";
        cin >> cantidad;
        ingresoAAcumular = ingresoAAcumular + cantidad;

        cout << "Llevo acumulados: " << ingresoAAcumular << endl;
    }

    cout << "Acumulado total de los números del ciclo: " << acumulador << endl;
    cout << "Acumulado total de los valores ingresados: " << ingresoAAcumular << endl;

    return 0;
}
