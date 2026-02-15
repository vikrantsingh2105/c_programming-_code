//Write a program to check whether a given number is prime or not using do while loop
#include<stdio.h>

int main(){
    int n,not_prime = 0;
    printf("enter n:  ");
    scanf("%d",&n);
    if(n==0 || n==1)
    {
        not_prime=1;
    }
    else
    { int i=2;
        do
        {
            if(n%i==0 && n!=2){
            not_prime=1;
            break;
            }
            i++;
        } while(i<n);
    }    
        if(not_prime)
        printf("%d is not prime",n);
        else
        printf("%d is  prime",n);
    
        return 0;
}