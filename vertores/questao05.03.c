#include<stdio.h>
#include<stdlib.h>

int main () {
    int C[10], i=0, menor, maior;
    menor= C[i];
    maior= C[i];

    for(i; i<10; i++){
        printf("escreva um numero\n");
        scanf("%d", &C[i]);
        if(menor>C[i]){
            menor= C[i];
        }
        if(maior<C[i]){
            maior=C[i];
        }
    }
    printf(" o menor e %d\n", menor);
    printf("o maior e %d\n", maior);

    system("pause");
    return 0;
