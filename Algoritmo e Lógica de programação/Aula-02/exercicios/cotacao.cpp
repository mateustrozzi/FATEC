#include <iostream>

using namespace std;

int main(){
    float dolar, real, cotacao;
    cout << "Qual é a cotação do dólar hoje?\n";
    cin >> dolar;
    cout << "Qunatos dólares você pretende cotar hoje?\n";
    cin >> real;
    cotacao = real / dolar;
    cout << "Você vai cotar $" << cotacao << ".\n";
    return 0;

}