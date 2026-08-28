//proibido se idade for menor/igual 10 ou
// a altura menor que 1.20

#include <iostream>

int main(){
    int idade;
    float altura;

    std::cout << "Entre com sua idade:\n";
    std::cin >> idade;
    std::cout << "Entre com sua altura:\n";
    std::cin >> altura;
    if(idade <= 10 || altura <= 1.2){
        std::cout << "Proibido\n";
        std::cout << idade << " " << altura << std::endl;
    }
    else{
        std::cout << "Liberado\n";
    }
    return 0;
}