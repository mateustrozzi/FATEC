#include <stdio.h>

int main(){
    char mensagem[30];
    fgets(mensagem, 30, stdin);
    printf(mensagem);
    return 0;
}