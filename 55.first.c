// Write a recursive function to calculate the sum of first 'n' natural numbers

#include<stdio.h>

int sum_natural(int);

int main(){
    int n=5;
    printf("sum of first 5 natural number is %d",sum_natural(n));    
    
}


int sum_natural(int x){
    if(x==1)
    {
        return 1;
    }
    return sum_natural(x-1)+ x;
}