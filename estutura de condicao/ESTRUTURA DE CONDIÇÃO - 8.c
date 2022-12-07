#include <stdio.h>
#include <stdlib.h>

    /*8. Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 e
imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1,
segunda-feira, se 2, e assim por diante.*/

int main (){

  int diaSemana;

  printf ("Digite um dia da semana de 1 a 7 (os numeros estao em ordem cronologica, sendo 1 = domingo): ");
  scanf("%d", & diaSemana);

  switch ( diaSemana)
  {
    case 1 :
    printf ("Domingo\n");
    break;

    case 2 :
    printf ("Segunda\n");
    break;

    case 3 :
    printf ("Terca\n");
    break;

    case 4 :
    printf ("Quarta\n");
    break;

    case 5 :
    printf ("Quinta\n");
    break;

    case 6 :
    printf ("Sexta\n");
    break;

    case 7 :
    printf ("Sabado\n");
    break;
  }

}
