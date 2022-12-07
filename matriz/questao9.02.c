#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {

   int m [5] [5], i , j, soma = 0;

   for (i = 0; i < 5; i++) {

       for (j = 0; j < 5; j++) {

           m [j] [i] = i + j;// aqui eu improvisei a atribuição para nao dwdggigitar//

       }

   }

   for (i = 0; i < 5; i++) {

       for (j = 0; j < 5; j++) {

           if (j != i && 4 - i != j ){

               printf ("%d ", m [i] [j]);

               soma += m [i] [j];

           }else{

               printf("0 ");

           }

       }

       printf("\n");//ele irá pular de linha sempre que uma nova linha começar

   }

   printf("A SOMA DOS NÚMEROS DIGITADOS É %d\n", soma);

   return 0;
