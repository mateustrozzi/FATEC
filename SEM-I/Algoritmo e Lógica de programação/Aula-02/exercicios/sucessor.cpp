#include <iostream>

using namespace std;

int main(){
    int n1, s, ss;
    
    cout << "Entre com um número inteiro:\n";
    cin >> n1;
    s = n1 -1;
    ss = n1 + 1;
    cout << "O antecessor de " << n1 << " é " << s << " e o sucessor é " << ss << "." <<endl;
    return 0;
}