#include <iostream>

using namespace std;

int main(){
    int temp;
    cout << "Entre com uma temperatura em Celsus\n";
    cin >> temp;
    cout << "A conversão de " << temp << "ºC em Fahrenheit é " << (temp * 1.8) + 32 << "Fº.\n";
    return 0;
}