#include <iostream>
#include <iomanip>

namespace Ciencia {
    namespace Fisica {
        const double c = 299792458;
        double calcularEnergia(double masa) {
            return masa * c * c;
        }
    }
}

int main() {
    double num;
    num = Ciencia::Fisica::calcularEnergia(10);
    std::cout << "Energia: " << std::fixed << std::setprecision(2) << num << std::endl;
    return 0;
}