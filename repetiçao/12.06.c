#include <stdio.h>
#include <stdlib.h>

void main(){
 int num,x=0;
scanf("%d",&num);

if(num>1){
    for(int i = 1; i < num+1; i++){
        if(num%i==0){
        x++;
        }
    }
    if(x==2){
        printf("ELE E PRIMO");
    }else{
        printf("ELE NAO E PRIMO");
    }
}else{
    printf("e menor de 1");
}


}
