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

    float real, dolar;
    center("============================================================");
    center("CELSIUS PARA FAHREINHEIT");    
    center("============================================================");
    
    std::cout << "Entre com o valor a ser cotado:\n";
    std::cin >> real;
    std::cin.ignore();//limpa o buffer do teclado
    std::cout << "Entre com a cotação do dólar:\n";
    std::cin >> dolar;
    std::cin.ignore();//limpa o buffer do teclado  
        
    std::stringstream titulo;
    std::stringstream mensagem;
    titulo << "COTAÇÃO dólar($" << std::fixed << std::setprecision(2) << dolar << ").";
    mensagem << "R$" << std::fixed << std::setprecision(2) << real << " dá $" << real / dolar; 
    limparTela();
    
    center("============================================================");
    center(titulo.str());    
    center("============================================================");
    center(mensagem.str());        
    

    std::cout << "\n\n\n" <<std::endl;
    


    return 0;
}