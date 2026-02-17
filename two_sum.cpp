#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Ingrese la cantidad de numeros: " << endl;
    cin >> n;

    int nums[100];

    cout << "Ingrese los numeros:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Ingrese el target: " << endl;
    cin >> target;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (nums[i] + nums[j] == target) {
                cout << "Los indices son: " << i << " y " << j << endl;
            }

        }
    }

    return 0;
}
