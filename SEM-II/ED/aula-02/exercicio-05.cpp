#include<iostream>

void ehPar(int vetor[]){
    int cont = 0;
    for(int i = 0; i < 6; i++){
        if(vetor[i] % 2 == 0){
            cont++;
        }
    }
    std::cout << "Foram encontrados " << cont << " números pares:\n";
    for(int i = 0; i < 6; i++){
        if(vetor[i] % 2 == 0){
            std::cout << vetor[i] <<std::endl;
        }
        
    }
}

int main(){
    int vetor[6];
    std::cout << "Entre com seis números inteiros:\n";
    for(int i = 0; i < 6; i++){
        std::cout << "Entre com o " << i + 1 << "º número:\n";
        std::cin >> vetor[i];
        std::cin.ignore();
    }
    
    ehPar(vetor);
}
