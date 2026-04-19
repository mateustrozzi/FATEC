#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cout << "Entre com um valor para A:\n";
    cin >> a;
    cout << "Entre com um valor para B\n";
    cin >> b;
    c = b;
    b = a;
    a = c;
    cout << "O valor de A é " << a <<"\n";
    cout << "O valor de B é " << b <<"\n";
    cout << "E o valor da variável auxiliar é " << c <<endl;
    return 0;

}