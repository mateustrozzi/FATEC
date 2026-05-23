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
    std::stringstream mensagem;
    borda << std::string(80, '=');
    float A, B, C, aux = 0;
    bool triangulo;
    std::string tipo;

    center(borda.str());
    center("VERIFIQUE SEU TRIÂNGULO");    
    center(borda.str());    

    std::cout << "Entre com o valor do primeiro lado do seu triângulo:\n";
    std::cin >> A;     
    
    std::cout << "Entre com o valor do segundo lado do seu triângulo:\n";
    std::cin >> B;

    std::cout << "Entre com o valor do último lado do seu triângulo:\n";
    std::cin >> C;   
    
    // testa se é triângulo

    if(A > B && A > C){
        if(B + C > A){
            triangulo = true;
        }
        else{
            triangulo = false;
        }
    }
    else if(B > A && B > C){
        if(A + C > B){
            triangulo = true;
        }
        else{
            triangulo = false;
        }
    }
    else if(C > A && C > B){
        if(A + B > C){
            triangulo = true;
        }
        else{
            triangulo = false;
        }
    }

    //testa se é equilátero, isósceles ou escaleno

    if(A == B && B == C && C > 0){
        tipo = "EQUILÁTERO";
    }
    else if(triangulo == true){
        if((A == B && A != C) || (B == C && A != B)){
            tipo = "ISÓSCELES";
        }
        else if(A != B && B != C && triangulo == true){
            tipo = "ESCALENO";
        }
    }

    limparTela();

    mensagem << "Os números " << A << ", " << B << " e " << C << " formam um triángulo válido.";

    center(borda.str());
    center(tipo);    
    center(borda.str());
    center(mensagem.str());
    center(borda.str());
    
    return 0;
}