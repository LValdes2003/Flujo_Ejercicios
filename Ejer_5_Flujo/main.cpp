#include <iostream>
#include <fstream>

int main() {
    std::string text;
    std::cout << "Ingresa un texto: ";
    std::getline(std::cin, text);

    std::ofstream file;
    file.open("example.txt");
    if (file) {
        file << text;
        std::cout << "El texto se guardó correctamente.\n";
    } else {
        std::cerr << "No se pudo abrir el archivo.\n";
    }
    file.close();
    return 0;
}

