#include <stdio.h>
#include <stdlib.h>

void main(){
int maior=-9999999;
int num,limite,conta;
scanf("%d",&limite);

for(int i = 0; i < limite; i++){
    scanf("%d",&num);
    if(maior<num){
        maior=num;
        conta=-1;
        conta++;
    }
    if(maior==num){
        conta++;
    }
}
printf("o maior numero e %d e foi lido %d vezes",maior,conta);
}
