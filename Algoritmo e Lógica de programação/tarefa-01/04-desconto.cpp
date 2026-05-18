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

    float preco, desconto;
    
    center("============================================================");
    center("DESCONTO");    
    center("============================================================");
    
    std::cout << "Entre com o valor do produto:\n";
    std::cin >> preco;
    std::cout << "Entre com o valor do desconto[somente números]:\n";
    std::cin >> desconto;
    std::stringstream valor;
    std::stringstream desc;
    std::stringstream total;
    std::stringstream mensagem;
    mensagem << "DESCONTO DE " << desconto << "%";
    valor << "Preço do produto: R$" << std::fixed << std::setprecision(2) << preco;
    desc << "Desconto: " << desconto << "%";
    total << "Total: R$" << std::fixed << std::setprecision(2) << preco - ((preco * desconto)/100);    

    limparTela();
    
    center("============================================================");
    center(mensagem.str());    
    center("============================================================");
    center(valor.str()); 
    center(total.str()); 
    

    std::cout << "\n\n\n" <<std::endl;
    


    return 0;
}