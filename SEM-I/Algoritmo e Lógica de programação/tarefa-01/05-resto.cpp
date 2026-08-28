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
    center("RESTO E QUOCIENTE");    
    center("============================================================");
    
    std::cout << "Entre com um número inteiro:\n";
    std::cin >> n1;
    std::cout << "Entre com outro número inteiro:\n";
    std::cin >> n2;
    std::stringstream resto;
    std::stringstream quociente;    
    std::stringstream mensagem;
    mensagem << "A divisão entre " << n1 << " e " << n2 << " é ";
    resto << "Resto: " << n1 % n2;
    quociente << "Quociente: " << n1 / n2;   

    limparTela();
    
    center("============================================================");
    center(mensagem.str());    
    center("============================================================");
    center(resto.str()); 
    center(quociente.str()); 
    
    

    std::cout << "\n\n\n" <<std::endl;
    


    return 0;
}