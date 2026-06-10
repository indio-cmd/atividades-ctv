#include <iostream>

int main() {
    int X;

    do {
        std::cout << "Digite um numero inteiro (nao pode ser negativo): ";
        std::cin >> X;
    } while (X < 0); 

    std::cout << "Numero valido: " << X << std::endl;

    return 0;
}