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

    std::string nome, sobrenome;
    int idade;
    center("============================================================");
    center("MONTAR FRASE");    
    center("============================================================");
    
    std::cout << "Entre com o seu nome:\n";
    std::getline(std::cin, nome);
    std::cout << "Entre com o seu sobrenome:\n";
    std::getline(std::cin, sobrenome);
    std::cout << "Entre com sua idade:\n";
    std::cin >> idade; 
    std::cin.ignore();//limpa o buffer do teclado
    
    std::stringstream titulo;
    std::stringstream mensagem;
    titulo << "FRASE MONTADA";
    mensagem << "Nome: " << nome << " " << sobrenome << ", " << idade << " anos.";

    limparTela();
    
    center("============================================================");
    center(titulo.str());    
    center("============================================================");
    center(mensagem.str());        
    

    std::cout << "\n\n\n" <<std::endl;
    


    return 0;
}