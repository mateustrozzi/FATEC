#include <iostream>
#include <windows.h>
#include <string>
#include <math.h>
using namespace std;

int main(){
SetConsoleCP(CP_UTF8) ;
SetConsoleOutputCP(CP_UTF8) ;

int contador = 0;
while (contador <= 10){
    cout << contador << endl; 
    contador ++ ;
}

return 0;
}