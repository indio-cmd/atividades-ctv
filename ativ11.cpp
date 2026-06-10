#include <iostream>


int main() {
    int vetor[5];
    int soma = 0; 

    std::cout << "--- Preenchendo o vetor ---" << std::endl;
    
 
    for(int i = 0; i < 5; i++) {
        std::cout << "Digite o valor " << i + 1 << ": ";
        std::cin >> vetor[i];
        
      
        soma = soma + vetor[i]; 
    }

    
    std::cout << "Soma do vetor: " << soma << std::endl;

    return 0;
}