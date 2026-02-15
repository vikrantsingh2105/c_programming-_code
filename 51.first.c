//Write a program using function to find average of three numbers
#include<stdio.h>

float average (int,int,int);

int main(){
    int a,b,c;
    printf(" enter 3 number: ");
    scanf("%d%d%d", &a, &b, &c);
    
    printf("average of %d,%d and%d is %f",a,b,c,average(a,b,c));
    return 0;
}

float average (int x,int y, int z ){
    return (x+y+z)/3.0;
}