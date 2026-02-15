// factorial of n by recursion
#include<stdio.h>

int factorial(int);

// main funtion
int main(){
    int n;
    printf("enter n:  ");
    scanf("%d",&n);
    printf("the factorial of %d is %d",n,factorial(n));
}

// function definition
int factorial(int x){
    if(x==0 || x==1){
        return 1;
    }

        return factorial(x-1)*x;
}