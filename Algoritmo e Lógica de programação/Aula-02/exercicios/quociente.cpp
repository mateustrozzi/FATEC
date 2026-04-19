#include <iostream>

using namespace std;

int main(){
    int n1, n2;
    cout << "Insira um número inteiro\n";
    cin >> n1;
    cout << "Insira um segundo número inteiro:\n";
    cin >> n2;
    cout << "O quociente dos números " << n1 << " e " << n2 << " é " << n1 / n2 <<endl;
    cout << "O resto da divisão dos números " << n1 << " e " << n2 << " é " << n1 % n2 <<endl;
    return 0;
}