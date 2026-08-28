#include <iostream>
#include <string>

using namespace std;

int main(){
    string nome, sobrenome, cidade, UF;
    int idade;

    cout << "Entre com seu nome:" << endl;
    getline(cin, nome);
    cout << "Entre com o seu sobrenome:" << endl;
    getline(cin, sobrenome);
    cout << "Entre com sua cidade:" << endl;
    getline(cin, cidade);
    cout << "Entre com seu estado:" << endl;
    getline(cin, UF);
    cout << "Entre com sua idade:" << endl;
    //cin.ignore();
    cin >> idade;
    cout << "Nome: " << nome << " " << sobrenome << ", " << idade << " anos - " << cidade << " - " << UF << endl;
    return 0; 
}