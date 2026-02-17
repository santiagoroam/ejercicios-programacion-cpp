#include <iostream>
using namespace std;

int main() {

    int opcion;
    int n;

    cout << "Elija una opcion:" << endl;
    cout << "1. Sumar los elementos de un arreglo" << endl;
    cout << "2. Buscar un elemento en un arreglo" << endl;
    cin >> opcion;

    cout << "Ingrese la cantidad de numeros del arreglo: " << endl;
    cin >> n;

    int arreglo[100];

    cout << "Ingrese los numeros:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> arreglo[i];
    }

    if (opcion == 1) {

        int suma = 0;

        for (int i = 0; i < n; i++) {
            suma = suma + arreglo[i];
        }

        cout << "La suma de los elementos es: " << suma << endl;
    }

    if (opcion == 2) {

        int numero;
        int encontrado = 0;

        cout << "Ingrese el numero que desea buscar: " << endl;
        cin >> numero;

        for (int i = 0; i < n; i++) {
            if (arreglo[i] == numero) {
                encontrado = 1;
            }
        }

        if (encontrado == 1) {
            cout << "El numero si esta en el arreglo" << endl;
        } else {
            cout << "El numero no esta en el arreglo" << endl;
        }
    }

    return 0;
}
