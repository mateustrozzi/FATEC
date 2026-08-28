#include <iostream>
#include "interface.h" // Carrega cabeçalho customizado
#include <sstream>
#include <string>
#include <iomanip>

int main() {
    // acentuação para o Windows
    #ifdef _WIN32
        std::setlocale(LC_ALL, ".UTF-8");
    #endif

    limparTela();

    int num;
    std::string resultado;
    center("============================================================");
    center("PAR OU ÍMPAR");    
    center("============================================================");
    
    std::cout << "Entre com um número:\n";
    std::cin >> num;
    std::cin.ignore();//limpa o buffer do teclado 

    std::stringstream titulo;
    std::stringstream mensagem;
    
    if(num % 2 == 0){
        titulo << "PAR";
        mensagem << "O número " << num << " é par!";
    }
    else{
        titulo << "ÍMPAR";
        mensagem << "O número " << num << " é ímpar!";
    }        
    
    limparTela();
    
    center("============================================================");
    center(titulo.str());    
    center("============================================================");
    center(mensagem.str());        
    

    std::cout << "\n\n\n" <<std::endl;
    


    return 0;
}