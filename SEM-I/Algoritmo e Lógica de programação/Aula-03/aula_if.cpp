#include <iostream>
#include <string>
using namespace std;
int main(){
    //string texto;
    int n1, n2, soma;
    //cout << "Digite um texto:\n";
    //getline(cin, texto);
    //cout << "Seu texto:\n" << texto <<endl;
    cout << "Entre com o primeiro número:\n";
    cin >> n1;
    cin.clear();
    cout << "Entre com o segundo número:\n";
    cin >> n2;
    cin.clear();
    soma = n1 + n2;
    cout << "A soma dos números " << n1 << " e " << n2 << " é igual a " << soma << "." <<endl;
    if(soma < 10){
        cout << "A soma dos números " << n1 << " e " << n2 << " é menor que 10."<<endl;
    }
    else if(soma < 20){
        cout << "A soma dos números " << n1 << " e " << n2 << " é menor que 20." <<endl;
    }
    else if(soma < 30){
        cout << "A soma dos números " << n1 << " e " << n2 << " é menor que 30." <<endl;
    }
    else if(soma < 40){
        cout << "A soma dos números " << n1 << " e " << n2 << " é menor que 40." <<endl;
    }
    else{
        cout << "A soma dos números " << n1 << " e " << n2 << " é maior que 50" <<endl;
    }

    
    return 0;
    
}