#include <iostream>
#include <string>

using namespace std;

int main(){
    int n1;
    //string = msg;
    cout << "Entre com um número inteiro:\n";
    cin >> n1;
    if(n1 % 4 == 0 && n1 % 6 == 0){
        cout << "O número " << n1 << " é divísivel por 4 e por 6" <<endl;        
    }else if(n1 % 6 == 0){
        cout << "O número " << n1 << " é divísivel por 6" <<endl;
    }
    else if(n1 % 4 == 0){
        cout << "O número " << n1 << " é divísivel por 4" <<endl;
    }
    else{
        cout << "O número " << n1 << " não é divísivel por 4 nem por 6! " <<endl;
    }
    return 0;
}