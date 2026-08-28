#include <iostream>

using namespace std;

int main(){
    int idade, cart;

    cout << "Entre com sua idade:" << endl;
    cin >> idade;
    cout << "Carteirinha de estudante? Sim[1/0]Não" << endl;
    cin >> cart;
    if((idade < 18 && idade > 30) || cart == 1){
        cout << "Você conseguiu uma promoção nas Lojas N" << endl;
    }
    else{
        cout << "Não há promoções para você nesse momento" << endl;
    }
    return 0;
}