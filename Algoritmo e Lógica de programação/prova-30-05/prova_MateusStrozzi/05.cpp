#include <iostream>
#include <string>

using namespace std;

int main(){
    string login, name;
    cout << "Entre com seu username:" << endl;
    getline(cin, name);
    cout << "Entre com a sua senha:" << endl;
    getline(cin, login);
    if(name != "FATEC" ||login != "FA123"){
        cout << "Usuário NÃO liberado!" << endl;
    }
    else{
        cout << "Usuário liberado!" << endl;
    }
    return 0;
}