#include <iostream>
#include <string>

using namespace std;

int main(){
    string mensagem;
    cout << "Digite a sua mensagem:\n";
    getline(cin, mensagem);
    cout << mensagem <<endl;
    return 0;
}