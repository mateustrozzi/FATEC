#include <iostream>

using namespace std;

int main(){
    int n1;
    cout << "Entre com um número:" << endl;
    cin >> n1;
    if(n1 % 2 == 0 && n1 > -1){
        cout << n1 << " é " << " positivo e par." << endl;
    }
    else{
        cout << "O número desejado não atende aos requisitos mínimos." << endl;
    }
    return 0;
}