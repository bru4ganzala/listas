#include <stdio.h>
#include <stdlib.h>

/*10. Faça um programa para verificar se determinado número inteiro lido é divisível por 3
ou 5, mas não simultaneamente pelos dois.*/

int main(){
    int num1=0;

    printf("Digite um numero (inteiro): ");
    scanf("%d", & num1);

    if(num1 % 3 == 0){
        printf("o numero e divisivel por tres!");
    }
    if(num1 % 5 == 0){
        printf("o numero e divisivel por cinco!");
    }
    else{
        printf("numero invalido!");

    }
}
