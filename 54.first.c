//Write a program using recursion to calculate n* element of Fibonacci series

#include<stdio.h>
// fibonacci series= 0 1 1 2 3 5 8 13 21- - -
int fibonacci(int);

int main(){
    int n=5;
    printf("value at %d in fabpnacci series is %d",n,fibonacci(n));
    return 0;
}



int fibonacci(int m){
    if(m==1||m==2)
    {
        return m-1;
    }
    return fibonacci(m-1)+fibonacci(m-2);
}