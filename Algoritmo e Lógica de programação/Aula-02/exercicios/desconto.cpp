#include <iostream>

using namespace std;

int main(){
    float valor;
    float desconto;
    cout << "Entre com o valor do produto:\n";
    cin >> valor;
    cout << "Entre com o desconto\n";
    cin >> desconto;
    cout << "O desconto será de " << desconto <<"\% e o valor atualizado será de R$" << valor -(valor * desconto / 100)<<endl;
    return 0;
}