#include <iostream>

using namespace std;

int collatzSteps(int n) {
    int steps = 0;

    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        steps++;
    }

    return steps;
}

int main() {
    int number;

    cout << "Ingrese un numero positivo: ";
    cin >> number;

    if (number <= 0) {
        cout << "Debe ingresar un numero positivo." << endl;
        return 1;
    }

    cout << "Numero de pasos hasta llegar a 1: "
         << collatzSteps(number) << endl;

    return 0;
}
