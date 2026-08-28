#include <iostream>
#include <string>

using namespace std;

int main(){
    string nome;
    string sobrenome;
    cout << "Entre com seu nome:\n" << endl;
    getline(cin, nome);
    cout << "Agora entre com seu sobrenome:\n" << endl;
    getline(cin, sobrenome);
    cout << "O " << nome << " " << sobrenome << " tem " << nome.length() + sobrenome.length() + 1 << " caracteres" << endl;
    return 0;
}