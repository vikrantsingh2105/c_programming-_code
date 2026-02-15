//Write a program to calculate the factorial of a given number using a for loop
#include<stdio.h>

int main(){
    int f=1,n,i;
    printf("enter value of n:  ");
    scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            f*=i;
        }
        printf("the factorial of %d is %d",n,f);
    return 0;
}