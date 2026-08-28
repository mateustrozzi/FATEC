#include <iostream>
#include <windows.h>
#include <string>
#include <math.h>
using namespace std;

int main(){
SetConsoleCP(CP_UTF8) ;
SetConsoleOutputCP(CP_UTF8) ;

// int contador = 10;
//while (contador >= 0){
//    cout << contador << endl; 
//    contador -- ;
//}

// Mostra os pares
// int contador = 10;
//while (contador >= 0){
//    cout << contador << endl; 
//    contador = contador -2 ;
//}


// Mostra os impares
int contador = 11;
while (contador >= 0){
    cout << contador << endl; 
    contador = contador -2 ;
}
return 0;
}