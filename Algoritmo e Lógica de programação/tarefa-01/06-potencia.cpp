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
    center("QUADRADO E CUBO");    
    center("============================================================");
    
    std::cout << "Entre com um número:\n";
    std::cin >> n1;    
    std::stringstream quadrado;
    std::stringstream cubo;    
    std::stringstream mensagem;
    mensagem << "QUADRADO E CUBO";
    cubo << "O CUBO de " << n1 << " é " << n1 * n1 * n1;
    quadrado << "A QUADRADO de " << n1 << " é " << n1 * n1;    

    limparTela();
    
    center("============================================================");
    center(mensagem.str());    
    center("============================================================");
    center(quadrado.str()); 
    center(cubo.str());     
    

    std::cout << "\n\n\n" <<std::endl;
    


    return 0;
}