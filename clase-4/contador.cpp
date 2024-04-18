#include <iostream>
#include <string>

using namespace std;

int main() {
    int opcion =1 ;
    int contador =0;


cout << "ingrese la cantidad de veces que quiere que se repita el bucle";
cin >> opcion;

    while (contador < opcion)
    {
       contador = contador +1;

       cout <<"El ciclo se repite :" <<endl;
       cout <<contador <<endl;

    }
    return 0;


}