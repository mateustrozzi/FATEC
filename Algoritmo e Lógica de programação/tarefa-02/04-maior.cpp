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
    center("QUAL É O MAIOR?");    
    
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

    // Tratamento de igualdades (mantive a sua lógica que já funciona bem)
    if(n1 == n2 && n1 == n3){
        titulo << "IGUAIS";
        mensagem << "Os números " << n1 << ", " << n2 << " e " << n3 << " são iguais.";
        center(titulo.str());    
        center(mensagem.str());
        return 0;
    }
    if(n1 == n2){
        titulo << "NEM TODOS SÃO DIFERENTES";
        if(n1 > n3) mensagem << "Os números " << n1 << " e " << n2 << " são iguais e maiores que " << n3 << ".";
        else        mensagem << "Os números " << n1 << " e " << n2 << " são iguais e menores que " << n3 << ".";
        center(titulo.str());    
        center(mensagem.str());
        return 0;
    }
    if(n2 == n3){
        titulo << "NEM TODOS SÃO DIFERENTES";
        if(n1 > n2) mensagem << "O número " << n1 << " é maior que os iguais " << n2 << " e " << n3 << ".";
        else        mensagem << "O número " << n1 << " é menor que os iguais " << n2 << " e " << n3 << ".";
        center(titulo.str());    
        center(mensagem.str());
        return 0;
    }
    if(n1 == n3){
        titulo << "NEM TODOS SÃO DIFERENTES";
        if(n2 > n1) mensagem << "O número " << n2 << " é maior que os iguais " << n1 << " e " << n3 << ".";
        else        mensagem << "O número " << n2 << " é menor que os iguais " << n1 << " e " << n3 << ".";
        center(titulo.str());    
        center(mensagem.str());
        return 0;
    }

    // --- NOVA LÓGICA DE ORDENAÇÃO (Para quando todos são diferentes) ---

    // 1. Descobre o Maior
    if (n1 > n2 && n1 > n3)      maior = n1;
    else if (n2 > n1 && n2 > n3) maior = n2;
    else                         maior = n3;

    // 2. Descobre o Menor
    if (n1 < n2 && n1 < n3)      menor = n1;
    else if (n2 < n1 && n2 < n3) menor = n2;
    else                         menor = n3;

    // 3. O do meio (quase) é a sobra: a soma de todos menos o maior e o menor
    quase = (n1 + n2 + n3) - maior - menor;

    // Definindo o título dinamicamente baseado em quem é o maior
    if (maior == n1)      titulo << "O PRIMEIRO NÚMERO É MAIOR";
    else if (maior == n2) titulo << "O SEGUNDO NÚMERO É MAIOR";
    else                  titulo << "O TERCEIRO NÚMERO É MAIOR";

    // Agora a mensagem fica universal e simples, sem ifs complexos!
    mensagem << "O número " << maior << " é maior que " << quase << " que é maior que " << menor << ".";
    
    // Exibição dos resultados
    center(titulo.str());    
    center(mensagem.str());            

    std::cout << "\n\n\n" << std::endl;   
    return 0;
}