#include <iostream>
#include <windows.h>
#include <string>
#include <math.h>
using namespace std;

int main(){
SetConsoleCP(CP_UTF8) ;
SetConsoleOutputCP(CP_UTF8) ;

int numero ;
int contador = 0;
int resultado ;

cout << "Digite o número para a tabuada: " << endl ;
cin >> numero ;


while (contador <= 10){
    resultado = numero * contador ;
    cout << numero << " x " << contador << " = " << resultado << endl; 
    contador ++ ;
}
return 0;
}