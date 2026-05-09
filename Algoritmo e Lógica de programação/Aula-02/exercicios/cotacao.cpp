#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main(){
    float dolar, real, cotacao;
    cout << fixed << setprecision(2);
    printf("Olá mundo usando o printf\n");
    cout << "Qual é a cotação do dólar hoje?\n";
    cin >> dolar;
    cout << "Qunatos dólares você pretende cotar hoje?\n";
    cin >> real;
    cotacao = real / dolar;
    cout << "Você vai cotar $" << cotacao << ".\n";
    return 0;

}