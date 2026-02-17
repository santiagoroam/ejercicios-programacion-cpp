#include <iostream>
using namespace std;

int main() {

    int x;
    int original;
    int invertido = 0;
    int digito;

    cout << "Ingrese un numero: " << endl;
    cin >> x;

    original = x;

    while (x > 0) {
        digito = x % 10;
        invertido = invertido * 10 + digito;
        x = x / 10;
    }

    if (original == invertido) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
