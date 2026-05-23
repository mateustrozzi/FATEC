#include <iostream>
#include "interface.h" // Carrega cabeçalho
#include <sstream>
#include <string>
#include <iomanip>

int main() {
    // acentuação para o Windows
    #ifdef _WIN32
        std::setlocale(LC_ALL, ".UTF-8");
    #endif

    limparTela();

    std::stringstream borda;
    std::stringstream titulo;
    std::stringstream mensagem;
    borda << std::string(60, '=');
    float nota;

    center(borda.str());
    center("NOTA DO ALUNO");    
    center(borda.str());

    std::cout << "Entre com a nota do aluno:\n";
    std::cin >> nota;
    std::cin.ignore();//limpa o buffer do teclado     

    limparTela();

    if(nota < 0){
        mensagem << "O aluno é desprovido de capacidade cognitiva...";
        titulo << "AMEBA?";
    }
    else if(nota <= 5){
        mensagem << "O aluno teve uma nota abaixo do esperado e será reavaliado.\n";
        titulo << "RECUPERAÇÃO";
    }
    else if(nota >= 5 && nota <= 7){
        mensagem << "O aluno teve uma nota dentro do esperado. PArabéns!\n";
        titulo << "APROVADO";
    }else if(nota > 7 && nota < 10){
        mensagem << "O aluno teve um excelente desempenho!";
        titulo << "PARABÉNS!";
    }else{
        mensagem << "O aluno teve uma nota acima da média! QI de Einstein?";
        titulo << "SOBRENATURAL";
    }

        center(borda.str());
        center(titulo.str());    
        center(borda.str());
        center(mensagem.str());
        center(borda.str());
        return 0;
    
    
    return 0;
}