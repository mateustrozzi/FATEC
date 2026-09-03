#include<iostream>
#include<iomanip>

//plataformainova.cps.sp.gov.br

std::string regiao[4] = {"Sul", "Norte", "Leste", "Oeste"};
std::string coleta[3] = {"período: manhã", "período: tarde", "período: noite"};

void analisarFluxo(int matriz[][4], int total[], int linhas, int colunas, int *max){
    for(int i = 0; i < colunas; i++){//1 + N+1 + 2N
        //coluna
        for(int j = 0; j < linhas; j++){//1 + N+1 + 2N
            total[i] += matriz[j][i];//2N
            if(*max < matriz[j][i]){//1N
                *max = matriz[j][i];//1N
            }
        }
    }    
    
    std::cout << "----------------------------------------\n";//1
    std::cout << "Análise de fluxo semanal por regiões:\n";//1
    std::cout << "----------------------------------------\n";//1

    for(int i = 0; i < 4; i++){//1 + N+1 +2N
        std::cout << std::setw(8) << regiao[i];//1N
    }
              

    std::cout << "\n----------------------------------------\n";//1

    for(int i = 0; i < colunas; i++){//1 + N+1 + 2N
        if(i == colunas - 1){//2N
            std::cout << std::setw(8) << total[i] <<std::endl;//1N
        }
        else{
            std::cout << std::setw(8) << total[i];//1
        }

    }
    std::cout << "----------------------------------------\n";//1
    std::cout << "Maior inserção: " << *max << std::endl;//1
    std::cout << "----------------------------------------\n";//1
    
    
}

int main(){
    int matriz[3][4]; // = {{1, 5, 12, 18},{12, 13, 25, 27},{12, 12, 15, 23}};
    int total[4]  = {0, 0, 0, 0};
    int  max = 0;
    for(int j = 0;j < 4; j++){
        std::cout << "\nPreencha os dados da " << regiao[j] << ":\n\n";
        for(int i = 0; i < 3; i++){
            std::cout << coleta[i] << "\n";
            std::cin >> matriz[i][j];
            //std::cin.ignore();
        }
    }
    int linhas = 3;
    int colunas = 4;
    analisarFluxo(matriz, total, linhas, colunas, &max);

    std::cout << "A função analisarFluxo tem a complexidade BigOh = O(N²)" <<std::endl;
    std::cout << "A matriz tem 4 regiões (R) e 3 períodos (P),\nsendo realizada R * P, ou 12 vezes por execução."
    << "\nColeta desses dados realizadas na função main.\n";

    return 0;
    
}