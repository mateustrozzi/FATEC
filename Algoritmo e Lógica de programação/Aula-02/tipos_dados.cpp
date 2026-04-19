#include <iostream>
#include <clocale>
#include <string>

int main(){
    //setlocale(LC_ALL, "Portuguese"); - Inserir diretiva ifdef para usar no windows
    // ou usar windows.h
    //SetConsoleOutputCP(CP_UTF8);
    //SetConsoleCP(CP_UTF8);
    std::cout<<"Hello there! não" << std::endl;
    std::string umNome = "teste";
    float altura = 1.56;
    string nome = "Fulano";
    char nome2[16] = "Fulano";
    std::cout << umNome << std::endl;
    return 0;
}