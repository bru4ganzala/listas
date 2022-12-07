#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os
dois números forem iguais, imprima a mensagem “Números iguais”.*/

 int main (){
    int num1=0, num2=0;

    printf("Digite um numero: ");
    scanf("%d", & num1);
    printf("Digite um numero: ");
    scanf("%d", & num2);

    if(num1 > num2){
        printf("O primeiro numero e o maior!");
    };
    if(num2 > num1){
        printf("O segundo numero e o maior!");
    };
    if(num2 == num1){
        printf("Os numeros tem o memo valor!");
    };
    return 0;
 }
