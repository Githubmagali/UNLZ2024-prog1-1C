#include <iostream>


using namespace std;

int main() { 
     // Define la constante de la velocidad del sonido en metros por segundo
    const double velocidad_sonido = 343.0;

    // Declara la variable para almacenar los segundos transcurridos
    int segundos;

    // Solicita al usuario que ingrese los segundos transcurridos entre el relámpago y el trueno
    cout << "Ingresa los segundos transcurridos entre el relampago y el trueno: ";
    cin >> segundos;

    // Calcula la distancia en metros
    double distancia = velocidad_sonido * segundos;

  
    cout << "La tormenta se encuentra a una distancia de " << distancia << " metros." << endl;

    return 0;

}
