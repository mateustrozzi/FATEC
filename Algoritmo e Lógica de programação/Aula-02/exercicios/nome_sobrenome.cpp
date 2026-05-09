#include <iostream>
#include <string>
using namespace std;

int main(){

    string nome, sobrenome, msg;
    int idade;
    cout << "Entre com o seu nome:\n";
    getline(std::cin, nome);
    cout << "Entre com o seu sobrenome:\n";
    getline(std::cin, sobrenome);
    cout << "Entre com sua idade:\n";
    cin >> idade;
    cout << nome << " " << sobrenome <<", " << idade << " anos.\n";
    return 0;
}