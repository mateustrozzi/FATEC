#include <iostream>

using namespace std;

int main(){
    int idade;

    cout << "Entre com a idade do aluno:" << endl;
    cin >> idade;

    if(idade >= 5 && idade <= 10){
        cout << "Categoria Infantil" << endl;
    }else if(idade >= 11 && idade <= 17){
        cout << "Categoria  Juvenil" << endl;
    }

    return 0;
}