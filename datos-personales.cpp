#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declaro  las variables para almacenar los datos personales del usuario
    string nombres, apellido, direccion, localidad, provincia, pais, telefono;
    int edad;

    // Solicitar al usuario que ingrese sus datos personales
    cout << "Ingrese sus nombres: ";
    getline(cin, nombres); // Utilizamos getline para capturar el nombre completo con espacios

    cout << "Ingrese su apellido: ";
    getline(cin, apellido);

    cout << "Ingrese su edad: ";
    cin >> edad;


    cout << "Ingrese su direccion: ";
    getline(cin, direccion);

    cout << "Ingrese su localidad: ";
    getline(cin, localidad);

    cout << "Ingrese su provincia: ";
    getline(cin, provincia);

    cout << "Ingrese su pais: ";
    getline(cin, pais);

    cout << "Ingrese su numero de telefono: ";
    getline(cin, telefono);

    // Imprimir los datos personales del usuario
    cout << "Datos personales del usuario:" << endl;
    cout << "Nombres: " << nombres << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "Edad: " << edad << " años" << endl;
    cout << "Direccion: " << direccion << endl;
    cout << "Localidad: " << localidad << endl;
    cout << "Provincia: " << provincia << endl;
    cout << "Pais: " << pais << endl;
    cout << "Telefono: " << telefono << endl;

    return 0;
}
