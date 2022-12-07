#include <stdio.h>
#include <stdlib.h>

void main(){

int x,y;

scanf("%d",&x);
y=x;
if(x%2==0){
    x=x-1;
    for (int i = 0; i < y; i=i+2){
    printf("%d,",x);
    x=x-2;
    }
}else{
for (int i = 0; i < y; i=i+2){
    printf("%d,",x);
    x=x-2;
}
}
}
