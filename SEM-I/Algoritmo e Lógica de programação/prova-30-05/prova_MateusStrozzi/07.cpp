#include <iostream>

using namespace std;

int main(){
    int n1, n2;

    cout << " Entre com primeiro número:" << endl;
    cin >> n1;
    cout << " Entre com segundo número:" << endl;
    cin >> n2;
    if(n2 == 0){
        cout << "Divisões por ZERO é uma indefinição matemática." << endl;
    }else{
        cout << "A divisão entre os números: " << n1 << " e " << n2 << " é " << n1 / n2 << endl;
    }
    return 0;
}