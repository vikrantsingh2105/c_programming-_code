//break statement in c
#include<stdio.h>

int main(){
    for(int i=0;i<15;i++)
    {
        if(i==5){
            break;   //exit the loop now
        }
        printf("i is %d\n",i);
    }
    return 0;
}