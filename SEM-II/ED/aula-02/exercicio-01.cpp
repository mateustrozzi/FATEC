#include<iostream>
#include<string>

using namespace std;

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

float calArea(float largura, float altura){
return largura * altura;
}

int main(){

float largura, altura, area;
char resp = 'a';

mensagem("Cálculo de Área");

while(resp != 'n' && resp != 's'){
    centralizar("Calcular a área de um cômodo?[s/n]");
    guia('_');
std::cin >> resp;
if(resp != 'n' && resp != 's'){
    std::cout << "Opção inválida!"<<endl;
}
else if(resp == 's'){
std::cout << "Entre com o valor da largura:\n";
std::cin >> largura;
std::cout << "Entre com o valor da altura:\n";
std::cin >> altura;
area = calArea(largura, altura);
std::cout << "A área calculada da largura de " << largura << "m e da altura " << altura << "m resulta em " << area << "m." << endl;
}

return 0;
}
}
