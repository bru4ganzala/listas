#include <stdio.h>
#include <stdlib.h>

void main(){

unsigned int x;
int media=0;

for (int i = 0; i < 10; i++){
    scanf("%d",&x);
    media=media+x;
}
printf("a media e %d",media/10);
}
