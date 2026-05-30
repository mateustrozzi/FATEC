#include <iostream>

using namespace std;

int main(){
    float credito;

    cout << "Entre com o valor do cŕedito" << endl;
    cin >> credito;

    if(credito <= 20000){
        cout << "Valor solicitado: R$" << credito << endl;
        cout << "Valor dos juros: R$" << credito * 0.02 << endl;
        cout << "Valor nominal a ser pago será de R$" << credito + (credito * 0.02) << endl;
        cout << "Número de parcelas: 24" << endl;
        cout << "Valor parcela: R$" << (credito + (credito * 0.02)) / 24 << endl;        
    }
    else if(credito > 20000 && credito <= 35000){
        cout << "Valor solicitado: R$" << credito << endl;
        cout << "Valor dos juros: R$" << credito * 0.05 << endl;
        cout << "Valor nominal a ser pago será de R$" << credito + (credito * 0.05) << endl;
        cout << "Número de parcelas: 36" << endl;
        cout << "Valor parcela: R$" << (credito + (credito * 0.05)) / 36 << endl;
    }
    else{
        cout << "Valor solicitado: R$" << credito << endl;
        cout << "Valor dos juros: R$" << credito * 0.10 << endl;
        cout << "Valor nominal a ser pago será de R$" << credito + (credito * 0.10) << endl;
        cout << "Número de parcelas: 36" << endl;
        cout << "Valor parcela: R$" << (credito + (credito * 0.10)) / 36 << endl;        
    
    }
}