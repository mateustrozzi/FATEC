#include <iostream>
#include <sstream>

int main(){

    int idade;

    std::cout << "Entre com sua idade:\n";
    std::cin >> idade;
    if((idade < 18 && idade >= 16)|| idade > 60){
        std::cout << "O voto é opcional!" << std::endl;
    }else if( idade < 16){
        std::cout << "Não pode votar!" << std::endl;
    }
    else{
        std::cout << "O voto é obrigatório" << std::endl;
    }
    return 0;
}