#include <iostream>



int main() {
    int matriz[2][3];

    std::cout << " Inserindo valores na Matriz 2x3" << std::endl;
    
    for(int linha = 0; linha < 2; linha++) {
        for(int coluna = 0; coluna < 3; coluna++) {
            std::cout << "Valor para a posicao [" << linha << "][" << coluna << "]: ";
            std::cin >> matriz[linha][coluna];
        }
    }

    std::cout << "Matriz em formato de tabela " << std::endl;
    

    for(int linha = 0; linha < 2; linha++) {
        for(int coluna = 0; coluna < 3; coluna++) {
         
            std::cout << matriz[linha][coluna] << "t"; 
        }
   
        std::cout << std::endl; 
    }

    return 0;
}