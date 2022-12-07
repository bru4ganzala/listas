#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia o salário de um trabalhador e o valor da prestação de
um empréstimo. Se a prestação:
● For maior que 20% do salário, imprima: “Empréstimo não concedido.”
● Caso contrário, imprima: “Empréstimo concedido.”*/

int main(){
    double salario, valorPrestacao, salarioPorcentagem;

    printf("Digite um salario:");
    scanf("%f", & salario);
    printf("Digite uma prestacao:");
    scanf("%f", & valorPrestacao);

    salarioPorcentagem = salario * 0.2;

    if(valorPrestacao < salarioPorcentagem){
        printf("Emprestimo nao concedido");
    }
    else{
        printf("Emprestimo concedido");
    }
}


