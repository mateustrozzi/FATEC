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

    float temp;
    center("============================================================");
    center("CELSIUS PARA FAHREINHEIT");    
    center("============================================================");
    
    std::cout << "Entre com a temperatura em Celsius (somente números)\n";
    std::cin >> temp;
    std::cin.ignore();//limpa o buffer do teclado  
        
    std::stringstream titulo;
    std::stringstream mensagem;
    titulo << "CONVERSÃO DE TEMPERATURAS";
    mensagem << temp << "ºC é igual a " << temp * 1.8 + 32 << "ºF.";
    limparTela();
    
    center("============================================================");
    center(titulo.str());    
    center("============================================================");
    center(mensagem.str());        
    

    std::cout << "\n\n\n" <<std::endl;
    


    return 0;
}