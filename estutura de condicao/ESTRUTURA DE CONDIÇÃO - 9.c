#include <stdio.h>
#include <stdlib.h>

/*9. Faça um programa que mostre ao usuário um menu com quatro opções de
operações matemáticas (as operações básicas, por exemplo). O usuário escolhe
uma das opções, e o seu programa pede dois valores numéricos e realiza a
operação, mostrando o resultado.*/

int main (){

    int primeiroValor, segundoValor;
    char operacaoMatematica;
    double valorFinal;

    printf("Digite o primeiro valor (inteiro): ");
    scanf("%d", & primeiroValor);
    printf("Digite o segundo valor (inteiro):");
    scanf("%d", & segundoValor);
    printf("Digite a operacao desejada escrevendo subtracao, soma, divisao ou multiplicacao ");
    scanf("%c", & operacaoMatematica);

    if(operacaoMatematica == "subtracao"){
        valorFinal = primeiroValor - segundoValor;
    }
    if(operacaoMatematica == "divisao"){
        valorFinal = primeiroValor / segundoValor;
    }
    if(operacaoMatematica == "soma"){
        valorFinal = primeiroValor + segundoValor;
    }
    if(operacaoMatematica == "multiplicacao"){
        valorFinal = primeiroValor * segundoValor;
    }

}
