#include <stdio.h>
#include <stdlib.h>

void main(){
int num=2,x=0;

for (int i = 0; i < 50; i++){
    x=x+num;
    num=num+2;
}
printf("%d",x);
}
