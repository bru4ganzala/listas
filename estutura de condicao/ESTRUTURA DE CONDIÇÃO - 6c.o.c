#include <stdio.h>
#include <stdlib.h>


/*Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o
usuário entre com o valor e o estado de destino do produto e o programa retorne o
preço final do produto acrescido do imposto do estado em que ele será vendido. Se
o estado digitado não for válido, mostrará uma mensagem de erro.*/
 int main(){

    char estado[2];
    double imposto;
    double valor;

    printf("Digite a sigla de um estado (MG, SP, RJ, MS): " );
    scanf("%d", & estado);

    printf("Digite o valor do produto: " );
    scanf("%f", & valor);

    if(estado == "MG" || estado == "mg" ){
        imposto =  valor * 0.07;
        printf("Imposto: %f", imposto );
    }
    if(estado == "SP" || estado == "sp" ){
        imposto =  valor * 0.12;
        printf("Imposto: %f", imposto );
    }
    if(estado == "RJ" || estado == "rj" ){
        imposto =  valor * 0.15;
        printf("Imposto: %f", imposto );
    }
    if(estado == "MS" || estado == "ms" ){
        imposto =  valor * 0.08;
        printf("Imposto: %f", imposto );
    }

 }
