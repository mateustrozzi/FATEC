#include <iostream>
#include <windows.h>
#include <string>
#include <math.h>
using namespace std;

int main(){
SetConsoleCP(CP_UTF8) ;
SetConsoleOutputCP(CP_UTF8) ;

int começo ; 0;
int fim ;

cout << "Digite o número onde começar a contagem: " << endl ;
cin >> começo ;
cout << "Digite o número onde parar a contagem: " << endl ;
cin >> fim ;

while (começo <= fim){
    cout << começo << endl; 
    começo ++ ;
}
return 0;
}