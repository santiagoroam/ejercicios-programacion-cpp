#include <iostream>
using namespace std;

int main() {

    int num1, num2, residuo;

    cout << "Ingrese dos numeros para sacar el maximo comun divisor" << endl;
    cin >> num1 >> num2;

    cout << "Sus numeros son: " << num1 << " y " << num2 << endl;

    while (num2 != 0) {
        residuo = num1 % num2;
        num1 = num2;
        num2 = residuo;
    }

    cout << "El maximo comun divisor es: " << num1 << endl;

    return 0;
}
