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
    center("QUAL É O MAIOR?");    
    center("============================================================");
    
    std::cout << "Entre com um número:\n";
    std::cin >> n1;
    std::cin.ignore();//limpa o buffer do teclado 
    std::cout << "Entre com outro número:\n";
    std::cin >> n2;
    std::cin.ignore();//limpa o buffer do teclado 
    std::cout << "Entre com outro número:\n";
    std::cin >> n3;
    std::cin.ignore();//limpa o buffer do teclado 

    std::stringstream titulo;
    std::stringstream mensagem;
    
    if(n1 == n2 && n1 == n3 && n2 == n3){
        titulo << "IGUAIS";
        mensagem << "O número " << n1 << ", " << n2 << " e " << n3 << " são iguais.";
        if(n1 == n2){
            titulo << "REPETIDOS";
            if(n1 > n3){
                mensagem << "O número " << n1 << " é igual ao " << n2 << ". E são maiores que " << n3;
            }else{
                mensagem << "O número " << n1 << " é igual ao " << n2 << ". E são menores que " << n3;
            }
        }
        else if(n2 == n3){
            titulo << "REPETIDOS";
            if(n1 > n3){
                mensagem << "O número " << n2 << " é igual ao " << n2 << ". E são menores que " << n1;
            }else{
                mensagem << "O número " << n2 << " é igual ao " << n3 << ". E são maiores que " << n1;
            }
        }
    }
    else if(n1 > n2 && n1 > n3){
        titulo << "O PRIMEIRO É MAIOR";
        mensagem << "O número " << n1 << " é maior que " << n2 << " e " << n3;
    }    
    else if(n2 > n1 && n2 > n3){
        titulo << "O SEGUNDO É MAIOR";
        mensagem << "O número " << n2 << " é maior que " << n1 << " e " << n3;
    }    
    else{
        titulo << "O TERCEIRO É MAIOR";
        mensagem << "O número " << n3 << " é maior que " << n1 << " e " << n2;
    }
    
    limparTela();
    
    center("============================================================");
    center(titulo.str());    
    center("============================================================");
    center(mensagem.str());        
    

    std::cout << "\n\n\n" <<std::endl;
    


    return 0;
}