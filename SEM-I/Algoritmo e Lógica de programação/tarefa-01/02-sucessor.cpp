#include <iostream>
#include "interface.h" // Carrega cabeçalho customizado
#include <sstream>
#include <string>

int main() {
    // acentuação para o Windows
    #ifdef _WIN32
        std::setlocale(LC_ALL, ".UTF-8");
    #endif

    limparTela();

    int n1;
    
    center("=========================================");
    center("ANTECESSOR E SUCESSOR");    
    center("=========================================");
    
    std::cout << "Entre com um número:\n";
    std::cin >> n1;
    std::stringstream antecessor;
    std::stringstream sucessor;
    antecessor << "O antecessor de " << n1 << " é " << (n1 -1);
    sucessor << "O sucessor de " << n1 << " é " << (n1 + 1);

    limparTela();
    
    center("=========================================");
    center("ANTECESSOR E SUCESSOR");    
    center("=========================================");
    center(antecessor.str());
    center(sucessor.str());
    center("=========================================");

    std::cout << "\n\n\n" <<std::endl;

    return 0;
}