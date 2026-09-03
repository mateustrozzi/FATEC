#include<iostream>
#include<string>
#include<iomanip>
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
string status(float media){
    if(media >= 7.0){
        return "\033[34mAPROVADO\033[0m";
    }
    else if(media < 7 && media >= 5.0){
        return "\033[33mEM RECUPERAÇÃO\033[0m";
    }
    else{
        return "\033[31mREPROVADO\033[0m";
    }
}

int main(){
    float notas[3];
    float media = 0;
    string msg;
    mensagem("Entre com as trẽs notas do aluno:");
    for(int i = 0; i <=2; i++){
        cout << "Entre com o " << i + 1 << "ª nota:" <<endl;
        cin >> notas[i];        
        media += notas[i];
        cin.ignore();
    }
    msg = status(media /3.0);
    cout << setprecision(2);
    cout << "Após o cálculo das notas " << notas[0] <<", "
    << notas[1] << " e " << notas[2] << ", média: " 
    << media/3 << " e status do aluno: " <<endl;
    guia('-');
    centralizar(msg);
    guia('-');
    
    return 0;
}
    
    
