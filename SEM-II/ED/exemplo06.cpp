#include<iostream>

void somarMatriz(int matriz[][3]){
    int vetor[3] = {0, 0, 0};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            vetor[i] += matriz[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        std::cout << vetor[i] << " ";
    }
    std::cout << "\n";
    
}

int main(){
    int matriz[3][3];
    std::cout << "Preencha a matriz 3x3 com números inteiros:\n";
    for(int i =0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            std::cin >> matriz[i][j];
            std::cin.ignore();
        }
    }
    std::cout << "A soma das linhas da matriz:\n";
    somarMatriz(matriz);
}