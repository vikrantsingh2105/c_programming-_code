//Write a program to calculate the factorial of a given number using a while loop
#include<stdio.h>

int main(){
    int f=1,n,i=1;
    printf("enter value of n:  ");
    scanf("%d",&n);
        while (i<=n)
        {
            f*=i;
            i++;
        }
        printf("the factorial of %d is %d",n,f);
    return 0;
}