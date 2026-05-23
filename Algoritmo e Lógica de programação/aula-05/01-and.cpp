#include <iostream>
#include <string>
#include <sstream>

int main(){

    int idade;
    float altura;
    std::string nome;
    std::stringstream msg;


    std::cout << "Entre com o seu nome:\n";
    std::getline(std::cin, nome);
    std::cout << "Entre com o sua idade:\n";
    std::cin >> idade;
    //std::cin.ignore();
    std::cout << "Entre com sua altura:\n";
    std::cin >> altura;

    if( idade >= 20 && altura >=1.8){
        msg << "Olá " << nome << ", você está apto à natação!";
    }
    else{
        msg << "Olá " << nome << ", infelizmente você não está apto à natação" << std::endl;
    }
    std::cout << msg.str();
}