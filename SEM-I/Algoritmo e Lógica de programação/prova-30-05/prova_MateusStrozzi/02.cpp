#include <iostream>

using namespace std;

int main(){
    int n1;
    cout << "Entre com um número interiro:\n" << endl;
    cin >> n1;
    if(n1 < 0){
        cout << "O número " << n1 << " é negativo" << endl;
    }
    else if(n1 == 0){
        cout << "O número " << n1 << " é ZERO" << endl;
    }
    else{
        cout << "O número " << n1 << " é positivo" << endl;
    }
}