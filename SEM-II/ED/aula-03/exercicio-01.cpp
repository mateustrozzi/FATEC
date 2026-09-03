#include<iostream>
#include<iomanip> //manipulação de saídas

void analisarVendas(float vendas[], int nvendas){
    float min = vendas[0]; //1
    float max = 0; //1
    float  media = 0; //1
    //1 +            N+1           +2N
    for(int i = 0; i < nvendas; i = i + 1){
        if(vendas[i] > max){//1N
            max = vendas[i]; //1N
        }
        if(vendas[i] < min){//1N
            min = vendas[i]; //1N
        }
        media = media + vendas[i]; //  2N        
    }
    
    media = media / nvendas; //2
    std::cout << std::fixed; //força 2 casas decimais 1
    std::cout << std::setprecision(2); //complementa o fixed[] 1
    std::cout << "A menor venda foi de R$" //1
    << min << ", a maior foi de R$" 
    << max << ", e a média das vendas foi de R$" << media <<std::endl;
    //operações relevantes da função: 3 + 1 + (N+1) + 2N + 1N + 1N + 1N + 1N + 2N + 2
    //4 + 9N + 3 + 3= 9N+10
}

int main(){
    int nVendas = 0; //1
    std::cout << "------------------------------------------------------\n";//1
    std::cout << "                  Análise de vendas:                  \n";//1
    std::cout << "------------------------------------------------------\n";//1
    std::cout << "Entre com a quantidade de vendas para análise:\n";//1
    std::cin >> nVendas; //1
    float vendas[nVendas];
    //       1     +    N+1        +2N
    for(int j = 0; j < nVendas; j = j + 1){
        std::cout << "Entre com o valor da " << j + 1 << "ª venda:\n"; //1N
        std::cin >> vendas[j]; //1N
        std::cin.ignore();
    }
    analisarVendas(vendas, nVendas);
    //total main: 1 + 1 + 1 + N + 1 + 2N + N + N = 5N+9
    //total analisarVendas: 9N + 10
    //total: 14N+20
    printf("Há 14N+20 operações relevantes.\n");//1
    printf("A notação Big-O é O(n) complexidade linear.\n\n");//1

    return 0;    //1
}