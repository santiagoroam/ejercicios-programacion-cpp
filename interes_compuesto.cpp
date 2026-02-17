#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int P, n, t;
    double r, A;

    cout << "Ingrese la cantidad inicial P" << endl;
    cin >> P;
    
    cout << "Ingrese la tasa de interes anual (en decimal)" << endl;
    cin >> r;
    
    cout << "Ingrese el numero de veces que se aplica el interes al ano" << endl;
    cin >> n;
    
    cout << "Ingrese el numero de anos" << endl;
    cin >> t;

    cout << "Sus datos son " << P << " " << r << " " << n << " y " << t << endl;
    
    A = P * pow((1 + (r / n)), n * t);

    cout << "El interes compuesto es " << A << endl;

    return 0;
}
