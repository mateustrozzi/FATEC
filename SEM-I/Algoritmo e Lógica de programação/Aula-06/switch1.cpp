#include <iostream>
#include <windows.h>
#include <string>
#include <math.h>
using namespace std;

int main(){
SetConsoleCP(CP_UTF8) ;
SetConsoleOutputCP(CP_UTF8) ;

int opcao;

cout << "Escolha a opçao de 1 a 3: " ;
cin >> opcao ;

switch(opcao){
    case 1:
        cout << "Verde"; break;
    case 2:
        cout << "Azul"; break;
    case 3:
        cout << "Amarelo"; break;
}

    return 0;
}