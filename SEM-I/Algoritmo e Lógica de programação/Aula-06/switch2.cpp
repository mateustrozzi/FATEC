#include <iostream>
#include <windows.h>
#include <string>
#include <math.h>
using namespace std;

int main(){
SetConsoleCP(CP_UTF8) ;
SetConsoleOutputCP(CP_UTF8) ;

int diaSemana;

cout << "Escolha de 1 a 7: " ;
cin >> diaSemana ;

switch(diaSemana){
    case 1:
    cout << "Domingo" ; break;
    case 2:
    cout << "Segunda Feira" ; break;
    case 3:
    cout << "Terça Feira" ; break;
    case 4:
    cout << "Quarta Feira" ; break;
    case 5:
    cout << "Quinta Feira" ; break;
    case 6:
    cout << "Sexta Feira" ; break;
    case 7:
    cout << "Sábado" ; break;
}
    return 0;
}