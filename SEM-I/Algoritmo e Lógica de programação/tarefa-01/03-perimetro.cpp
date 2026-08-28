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

    float n1;
    
    center("============================================================");
    center("PERÍMETRO");    
    center("============================================================");
    
    std::cout << "Entre com o tamanho do quadrado:\n";
    std::cin >> n1;
    std::stringstream perimetro;
    perimetro << "O perímetro calculado de lado do quadrado de " << n1 << " é " << (n1 * 4);    

    limparTela();
    
    center("============================================================");
    center("PERÍMETRO");    
    center("============================================================");
    center(perimetro.str());    
    center("============================================================");

    std::cout << "\n\n\n" <<std::endl;
    


    return 0;
}