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

    //limparTela();

    std::stringstream borda;
    std::stringstream titulo;
    std::stringstream mensagem;
    borda << std::string(50, '=');
    float A, B, C = 0;

    center(borda.str());
    center("VERIFIQUE SEU TRIÂNGULO");    
    center(borda.str());

    std::cout << "Entre com o valor do primeiro lado do seu triângulo:\n";
    std::cin >> A;     
    
    std::cout << "Entre com o valor do segundo lado do seu triângulo:\n";
    std::cin >> B;

    std::cout << "Entre com o valor do último lado do seu triângulo:\n";
    std::cin >> C;    

    if(A + B > C && A + C > B && B + C > A){
        mensagem << "Os valores informados formam um triângulo válido!\n";
        titulo << "TRIÂNGULO";
        float sum1 = A + B;
        float sum2 = B + C;
        std::cout << (sum1) << std::endl;
        std::cout << (sum2) << std::endl;;
    }else{
        titulo << "ARE YOU KIDDIN'ME?";
        if(A + B < C){
        mensagem << "A soma de " << A << " e " << B << " é menor que " << C;
    }else{
        mensagem << "A soma de " << B << " e " << C << " é menor que " << A;
    }
}

    //limparTela();

    
        center(titulo.str());    
        center(mensagem.str());
        return 0;
    
    
    return 0;
}