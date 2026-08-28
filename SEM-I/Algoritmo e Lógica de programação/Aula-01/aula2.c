#include <stdio.h>

void main(){

int i, vet[5];

printf("Entre com os valores do vetor:\n");

for(i=0; i<5;i++){
printf("Entre com o  %dº inteiro:\n", i + 1);
scanf("%d", &vet[i]);
}

for(i=0; i<5; i++){
printf("%d\n", vet[i]);
}
}
