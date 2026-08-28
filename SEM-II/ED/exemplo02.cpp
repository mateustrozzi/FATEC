#include<iostream>
#include<string>

using namespace std;

bool ehPar(int i){
    int a = i;
    if(i % 2 == 0){
        return true;
    }
    else
    {
        return false;
    }
}

void guia(char caractere){
    char c = caractere;
    for(int i =1; i <= 79; i++){
        std::cout << c;
        if(i == 79){
            std::cout << c <<endl;
        }
    }
}

void centralizar(string texto){
    std::string retorno = texto;
    int i = texto.length();
    i = int((80 - i) / 2);
    for(int x = 0; x < i; x++){
        std::cout << ' ';
    }
    std::cout << retorno <<endl;
}
void mensagem(string texto){
    guia('-');
    centralizar(texto);
    guia('-');
}

int main(){
    int num;
    guia('-');
    centralizar("Entre com um número:");
    guia('-');
    std::cin >> num;
    guia('=');
    if(ehPar(num) == true){
        centralizar("É PAR");
    }
    else
    {
        centralizar("É ÍMPAR");
    }
    return 0;
}

