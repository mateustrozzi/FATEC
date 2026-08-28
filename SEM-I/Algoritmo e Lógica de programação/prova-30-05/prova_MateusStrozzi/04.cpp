#include <iostream>

using namespace std;

int main(){
    float a, b, c;
    cout << "Entre com o primeiro lado do triângulo:" <<endl;
    cin >> a;
    cout << "Entre com o segundo lado do triângulo:" <<endl;
    cin >> b;
    cout << "Entre com o terceiro lado do triângulo:" <<endl;
    cin >> c;

    if( a == b && b == c){
        cout << "EQUILÁTERO" << endl;
    }
    else if((a == b * b != c)||(b == c && c != a)){
        cout << "ISÓSCELES" << endl;
    }
    else if(a != b && b != c){
        cout << "ESCALENO" << endl;
    }
    return 0;
}