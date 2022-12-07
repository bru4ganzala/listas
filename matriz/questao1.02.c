#include <stdio.h>
#include <stdlib.h>


int main()
{
    int l, c, i, j;
    float mesas[linha][coluna];


   for(l=0;l<linha;l++){
   printf("\nLinha %i\n", l+1);
    for(c=0;c<coluna;c++){
    printf("coluna %i: ", c+1);
    scanf("%f", &mesas[l][c]);
    }
   }
    printf("\nMatriz gerada\n");
    for(i=0;i<linha;i++)
    {
       for(j=0;j<coluna;j++)
       {
           printf("%d\t", mesas[l][c]);
       }
   }
    return 0;
}
