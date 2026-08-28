#include <iostream>
#include <windows.h>
#include <string>
#include <math.h>
using namespace std;

int main(){
SetConsoleCP(CP_UTF8) ;
SetConsoleOutputCP(CP_UTF8) ;

int numero ;
cout << "Digite um núm;ero: " ;
cin >> numero ;

if(numero != 10)(
    cout << "O número é differente de 10."
);
else cout << "O número é igual a 10.";
    return 0;
};
