//
// Created by Diego on 16/11/2023.
//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

namespace Matematicas {
    int sumar(int a, int b) {
        return a + b;
    }
    int restar(int a, int b) {
        return a - b;
    }
    int multiplicar(int a, int b) {
        return a * b;
    }
    int dividir(int a, int b) {
       try {
           if (b == 0) {
               throw 1;
           } else {
               return a / b;
           }
         } catch (int e) {
           cout << "No se puede dividir entre 0" << endl;
           return 0;
         }
    }
    int exponencial(int a, int b) {
        return pow(a, b);
    }
}

int main() {
    int num1;
    std::cout << "Ingresa un numero: ";
    std::cin >> num1;

    int num2;
    std::cout << "Ingresa un segundo numero: ";
    std::cin >> num2;

    cout << "Suma: " << Matematicas::sumar(num1, num2) << endl;
    cout << "Resta: " << Matematicas::restar(num1, num2) << endl;
    cout << "Multiplicacion: " << Matematicas::multiplicar(num1, num2) << endl;
    cout << "Division: " << Matematicas::dividir(num1, num2) << endl;
    cout << "Exponencial: " << Matematicas::exponencial(num1, num2) << endl;

    string continuar;
    std::cout << "Pulse 0 para continuar: ";
    std::cin >> continuar;
    return 0;

}