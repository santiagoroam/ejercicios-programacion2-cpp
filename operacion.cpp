#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

double suma(double a, double b) { return a + b; }
double resta(double a, double b) { return a - b; }
double multiplicacion(double a, double b) { return a * b; }

double division(double a, double b) {
    if (b == 0) throw runtime_error("Division por cero");
    return a / b;
}

double calcular(double a, double b, double (*operacion)(double, double)) {
    return operacion(a, b);
}

int main(int argc, char* argv[]) {

    if (argc != 4) {
        cout << "Ha ingresado valores inadecuados para el programa:\n";
        cout << "USO ./<ejecutable> <num1> <operador> <num2>\n";
        return 1;
    }

    try {
        double num1 = stod(argv[1]);
        double num2 = stod(argv[3]);
        string op = argv[2];

        double resultado;

        if (op == "+")
            resultado = calcular(num1, num2, suma);
        else if (op == "-")
            resultado = calcular(num1, num2, resta);
        else if (op == "*" || op == "x")
            resultado = calcular(num1, num2, multiplicacion);
        else if (op == "/")
            resultado = calcular(num1, num2, division);
        else
            throw invalid_argument("Operador invalido");

        cout << "El resultado de la operacion es "
             << resultado << endl;

    } catch (...) {
        cout << "Ha ingresado valores inadecuados para el programa:\n";
        cout << "USO ./<ejecutable> <num1> <operador> <num2>\n";
        return 1;
    }

    return 0;
}
