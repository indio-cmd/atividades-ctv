#include <iostream>


int main() {
    int valores[5];

    std::cout << "Preenchendo o vetor" << std::endl;
    
    for (int i = 0; i < 5; i++) {
        std::cout << "Digite o valor para a posicao " << i + 1 << ": ";
        std::cin >> valores[i];
    }

    std::cout << "Valores digitados na mesma ordem " << std::endl;
    
    for (int i = 0; i < 5; i++) {
        std::cout << valores[i] << std::endl;
    }

    return 0;
}