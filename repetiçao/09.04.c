#include <stdio.h>
#include <stdlib.h>

void main(){
int x,maior=-999999999999,menor=9999999999999;

for (int i = 0; i < 10; i++){
    scanf("%d",&x);
if(maior<x){
    maior=x;
}
if(menor>x){
    menor=x;
}
}
printf("o menor e %d e o maior e %d",menor,maior);
}
