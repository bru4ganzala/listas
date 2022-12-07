#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*5. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
● O número digitado ao quadrado.
● A raiz quadrada do número digitado.*/

int main(){

    int num, numAoQuadrado;
    double raizQuadrada;

    printf("Digite um numero inteiro: ");
    scanf("%d", & num);

    numAoQuadrado = num * num;
    raizQuadrada = sqrt(num);

    if(num > 0){
        num = numAoQuadrado;
        printf("O numero ao quadrado e: %d\n", numAoQuadrado);
        printf("A raiz quadrada do numero digitado e: %f", raizQuadrada);
    }

}
