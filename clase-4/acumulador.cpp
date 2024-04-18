#include <iostream>
#include <string>

using namespace std; 


//acumulador
int main () { 
    int diez = 10;
    int acumulador = 0;
    int ingreso = 0;

    cout << "Este programa va acumular hasta que llegue a 10" <<endl;

    while(acumulador  < diez){
        cout << "Ingrese por pantalla" << endl;

        cout << "Ingrese el valor a acumular" << endl;
        cin >>ingreso;

        acumulador = acumulador + ingreso;

        cout<< "Llevo acumulados:" << acumulador << endl;
    }

    cout << "Acumulador total:"<<acumulador <<endl;
    return 0;
}
