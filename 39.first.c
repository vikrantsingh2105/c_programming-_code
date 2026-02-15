//Write a program to print sum of first ten natural numbers using for loop
#include<stdio.h>

int main(){
int sum = 0;
    for (int i=1;i<=10;i++)
    {
    sum+=i;
    }  
printf("the sum of first 10 natural no is %d",sum);
    return 0;
}