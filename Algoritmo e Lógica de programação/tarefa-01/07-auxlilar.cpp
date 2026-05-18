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

    int n1, n2, n3;
    
    center("============================================================");
    center("TROCA DE VALORES DAS VARIÁVEIS");    
    center("============================================================");
    
    std::cout << "Entre com um número:\n";
    std::cin >> n1; 
    std::cout << "Entre com outro número:\n";
    std::cin >> n2; 
    //processamento
    n3 = n1;
    n1 = n2;
    n2 = n3;  
    std::stringstream aux1;
    std::stringstream aux2;    
    std::stringstream mensagem;
    mensagem << "VARIÁVEIS TROCADAS";
    aux1 << "O primeiro número digitado foi " << n3 << " mas seu valor agora é " << n1;
    aux2 << "O segundo número digitado foi " << n1 << " mas seu valor agora é " << n3;   

    limparTela();
    
    center("============================================================");
    center(mensagem.str());    
    center("============================================================");
    center(aux1.str()); 
    center(aux2.str());     
    

    std::cout << "\n\n\n" <<std::endl;
    


    return 0;
}