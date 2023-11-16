#include <iostream>
#include <cmath>
#include <iomanip>

namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }
    int resta(int a, int b) {
        return a - b;
    }
    int multiplicacion(int a, int b) {
        return a * b;
    }
    double division(double a, double b) {
        return a / b;
    }
    int cuadrado(int a) {
        return a * a;
    }
    double logaritmo(int a) {
        return log(a);
    }
}

int main() {
    double num;
    num = Matematicas::suma(5, 3);
    std::cout << "Suma: " << std::fixed << std::setprecision(2) << num << std::endl;

    num = Matematicas::resta(5, 3);
    std::cout << "Resta: " << std::fixed << std::setprecision(2) << num << std::endl;

    num = Matematicas::multiplicacion(5, 3);
    std::cout << "Multiplicacion: " << std::fixed << std::setprecision(2) << num << std::endl;

    num = Matematicas::division(5, 3);
    std::cout << "Division: " << std::fixed << std::setprecision(2) << num << std::endl;

    num = Matematicas::cuadrado(5);
    std::cout << "Cuadrado: " << std::fixed << std::setprecision(2) << num << std::endl;

    num = Matematicas::logaritmo(5);
    std::cout << "Logaritmo: " << std::fixed << std::setprecision(2) << num << std::endl;
    return 0;
}