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

    int n1, n2;
    center("============================================================");
    center("QUAL É O MAIOR?");    
    center("============================================================");
    
    std::cout << "Entre com um número:\n";
    std::cin >> n1;
    std::cin.ignore();//limpa o buffer do teclado 
    std::cout << "Entre com outro número:\n";
    std::cin >> n2;
    std::cin.ignore();//limpa o buffer do teclado 

    std::stringstream titulo;
    std::stringstream mensagem;
    
    if(n1 == n2){
        titulo << "IGUAIS";
        mensagem << "O número " << n1 << " é igual a " << n2;
    }
    else if(n1 > n2){
        titulo << "O PRIMEIRO É MAIOR";
        mensagem << "O número " << n1 << " é maior que " << n2;
    }    
    else{
        titulo << "O PRIMEIRO É MENOR";
        mensagem << "O número " << n1 << " é menor que " << n2;
    }    
    
    limparTela();
    
    center("============================================================");
    center(titulo.str());    
    center("============================================================");
    center(mensagem.str());        
    

    std::cout << "\n\n\n" <<std::endl;
    


    return 0;
}