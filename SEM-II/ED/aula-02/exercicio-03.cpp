#include<iostream>
#include<string>

using namespace std;

//Para saber se um número N é primo, você testa a divisão dele por todos os números de 2 até N-1. Se o resto de alguma dessas divisões for zero, o número não é primo.


bool ehPrimo(int num){
    if(num <= 1){
        return false;
    }
    for(int i = 2; i < num; i++){
        if(num % i == 0){            
            return false;
         }
     }
     return true;
}

int main(){
    int num;
    bool retorno;
    std::cout << "Entre com um número:\n";
    std::cin >> num;
    retorno = ehPrimo(num);
    if(retorno == true){
        cout << "É primo\n";
    }
    else{
        cout << "Não é primo\n";
    }
    return 0;
}
