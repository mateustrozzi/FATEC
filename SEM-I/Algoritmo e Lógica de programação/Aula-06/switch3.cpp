#include <iostream>
#include <windows.h>
#include <string>
#include <math.h>
using namespace std;

int main(){
SetConsoleCP(CP_UTF8) ;
SetConsoleOutputCP(CP_UTF8) ;

int numero1;
int numero2;
char escolha;



cout << "Digite o primeiro número: " ;
cin >> numero1 ;
cout << "Digite o segundo número: " ;
cin >> numero2 ;
cout << "Escolha a operação: " << endl ;
cout << "\t\t + -> Soma" << endl; 
cout << "\t\t - -> Subtração" << endl; 
cout << "\t\t * -> Multiplicação" << endl; 
cout << "\t\t / -> Divisão" << endl; 
cin >> escolha ;
switch(escolha){
    case '+': cout << "Resultado: " << numero1 + numero2 << endl ;
    break;
    case '-': cout << "Resultado: " << numero1 - numero2 << endl ;
    break;
    case '*': cout << "Resultado: " << numero1 * numero2 << endl ;
    break;
    case '/': cout << "Resultado: " << numero1 / numero2 << endl ;
    break;
}
    return 0;
}