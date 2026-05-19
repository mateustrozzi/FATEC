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

    //limparTela();

    int n1, n2, n3, maior, menor, quase;
    //center("============================================================");
    center("QUAL É O MAIOR?");    
    //center("============================================================");
    
    std::cout << "Entre com um número:\n";
    std::cin >> n1;
    std::cin.ignore();//limpa o buffer do teclado 
    std::cout << "Entre com outro número:\n";
    std::cin >> n2;
    std::cin.ignore();
    std::cout << "Entre com outro número:\n";
    std::cin >> n3;
    std::cin.ignore();

    std::stringstream titulo;
    std::stringstream mensagem;

    //Tratamento de igualdades
    
    if(n1 == n2 && n1 == n3 && n2 == n3){
        titulo << "IGUAIS";
        mensagem << "O número " << n1 << ", " << n2 << " e " << n3 << " são iguais.";

        //limparTela();
    
        //center("============================================================");
        center(titulo.str());    
        //center("============================================================");
        center(mensagem.str());
        return 0;
    }
    if(n1 == n2){
        if(n1 > n3){
            titulo << "NEM TODOS SÃO DIFERENTES";
            mensagem << "O número " << n1 << ", " << n2 << " são iguais e maiores que " << n3 << ".";
        }
        else{
            titulo << "NEM TODOS SÃO DIFERENTES";
            mensagem << "O número " << n1 << ", " << n2 << " são iguais e menores que " << n3 << ".";
        }
        //limparTela();
    
        //center("============================================================");
        center(titulo.str());    
        //center("============================================================");
        center(mensagem.str());
        return 0;
    }
    if(n2 == n3){
        if(n1 > n2){
            titulo << "NEM TODOS SÃO DIFERENTES";
            mensagem << "O número " << n2 << ", " << n3 << " são iguais e menores que " << n1 << ".";
        }
        else{
            titulo << "NEM TODOS SÃO DIFERENTES";
            mensagem << "O número " << n2 << ", " << n3 << " são iguais e menores que " << n1 << ".";
        }
        //limparTela();
    
        //center("============================================================");
        center(titulo.str());    
        //center("============================================================");
        center(mensagem.str());
        return 0;
    }

    //busca pelo maior

    if(n1 > n2 && n1 > n3){
        maior = n1;
    }else if(n2 > n1 && n2 > n3){
        maior = n2;
    }else if(n3 > n1 && n3 > n2){
        maior = n3;
    }

    // busca pelo menor

    if(n1 < n2 && n1 < n3){
        menor = n1;
    }
    else if(n2 < n1 && n2 < n3){
        menor = n2;
    }
    else if(n3 < n1 && n3 < n2){
        menor = n3;
    }
    //montando os titulos
    if(maior == n1){
        titulo << "O PRIMEIRO NÚMERO É MAIOR";
        if(n3 == menor){
            mensagem << "O número " << maior << "é maior que " << n2 << "que é maior que " << menor; 
        }
        else{
            mensagem << "O número " << maior << "é maior que " << n3 << "que é maior que " << menor; 
        }
    }
    else if(maior == n2){
        titulo << "O SEGUNDO NÚMERO É MAIOR";
        if(n1 == menor){
            mensagem << "O número " << maior << "é maior que " << n3 << "que é maior que " << menor; 
        }
    }
    else{
        titulo << "O TERCEIRO NÚMERO É MAIOR";
        mensagem << "O número " << maior << " é maior que " << n1 << " que é maior que " << menor;
    }        
    
    //limparTela();
    
    //center("============================================================");
    center(titulo.str());    
    //center("============================================================");
    center(mensagem.str());            

    std::cout << "\n\n\n" <<std::endl;   

    return 0;
}