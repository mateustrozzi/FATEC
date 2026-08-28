//aprovado se a média for maior que 6 e frequencia maior que 75%
#include <iostream>
#include <sstream>
#include <string>

int main(){
    float n1, n2, n3, n4;
    int f1, f2, f3, f4;
    int aulas = 200;
    float media;
    std::string nome;

    std::cout << "Entre com o nome do aluno:\n";
    std::getline(std::cin, nome);
    std::cout << "Entre com a nota do primeiro bimestre:\n";
    std::cin >> n1;
    std::cout << "Entre com as faltas do primeiro bimestre:\n";
    std::cin >> f1;
    std::cout << "Entre com a nota do segundo bimestre:\n";
    std::cin >> n2;
    std::cout << "Entre com as faltas do segundo bimestre:\n";
    std::cin >> f2;
    std::cout << "Entre com a nota do terceiro bimestre:\n";
    std::cin >> n3;
    std::cout << "Entre com as faltas do terceiro bimestre:\n";
    std::cin >> f3;
    std::cout << "Entre com a nota do quarto bimestre:\n";
    std::cin >> n4;
    std::cout << "Entre com as faltas do quarto bimestre:\n";
    std::cin >> f4;
    std::cout << "Quantas aulas houveram no ano letivo:\n";
    //std::cin >> aulas;

    media = (n1 + n2 + n3 + n4)/4;
    std::cout << "O aluno teve " << f1 + f2 + f3 + f4 << " faltas.\n";
    std::cout << "E obteve as notas " << n1 << ", " << n2 << ", " << n3 << " e " << n4;
    std::cout << " resultando na média " << media << ".\n";
    if(media <= 6 && (aulas * (f1 + f2 + f3 +f4))/100 < 75){
        std::cout << " O aluno foi aprovado.\n";
    }
    else{
        if(media < 6){
            std::cout << "O aluno foi retido por não atingir o índice mínimo.\n";
        }
        else if((aulas * (f1 + f2 + f3 +f4))/100 < 75){
            std::cout << "O aluno foi retido por não atingir 75% de presença.\n";
        }
        
    }
    return 0;
}