#include <iostream>

using namespace std;

int main()
{

    double pesos, dolares, cotizacion;

    cout << "Ingrese la cantidad de pesos: ";
    cin >> pesos;

    cout << "Ingrese la cotizacion del dolar estadounidense: ";
    cin >> cotizacion;

    dolares = pesos / cotizacion;

    cout
        << "La cantidad en dolares estadounidenses es: " << dolares << "USD" << endl;

        return 0;
}