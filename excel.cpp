#include <iostream>
#include <string>

using namespace std;

int titleToNumber(string columnTitle) {
    int result = 0;

    for (char c : columnTitle) {
        int value = c - 'A' + 1;
        result = result * 26 + value;
    }

    return result;
}

int main() {
    string input;

    cout << "Ingrese la columna de Excel (ej: A, AB, ZY): ";
    cin >> input;

    cout << "El numero correspondiente es: " 
         << titleToNumber(input) << endl;

    return 0;
}
