#include <iostream>
#include "interface.h" // Carrega cabeçalho customizado

int main() {
    // acentuação para o Windows
    #ifdef _WIN32
        std::setlocale(LC_ALL, ".UTF-8");
    #endif

    limparTela();

    int n1, n2;
    
    center("=========================================");
    center("CÁLCULO DE PRODUTO");    
    center("=========================================");
    
    std::cout << "Entre com o primeiro número:\n";
    std::cin >> n1;
    std::cout << "Agora, entre com o segundo número:\n";
    std::cin >> n2;
    
    std::cout << "O produto dos números " << n1 << " e " << n2 << " é " << n1 * n2 << std::endl;

    return 0;
}