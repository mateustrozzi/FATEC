#include <iostream>
#include <string>
#//include <windows.h>

using namespace std;

int main(){
    //SetConsoleOutputCP(CP_UTF8);
    string sport;
    cout << "\t\t\t\tEsportes FATEC"<<endl;
    cout << "Digite: \nbasquete\nfutebol\nvôlei\n";
    cout << "Pode escolher:\n";
    getline(cin, sport);
    cin.clear();
    for (char &c : sport) {
        c = std::tolower((unsigned char)c);
    }
    cout << sport;

    if(sport == "basquete"){
        cout << "Usuário selecionou BASQUETE\n";
    }
    else if(sport == "futebol"){
        cout << "Usuário selecionou FUTEBOL\n";
    }
    else{
        cout << "Usuário selecionou VÔLEI\n";
    }
    return 0;
}