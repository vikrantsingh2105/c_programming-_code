//Write a program to calculate the sum of the numbers occurring in the multiplication table of 8: (consider 8 × 1 to 8 × 10)
#include<stdio.h>

int main(){
int sum = 0;
    for (int i=1;i<=10;i++)
    {
    sum+=(8*i);
    }  
printf("the sum of no occuring in table of 8 is upto 8*10 is  %d",sum);
    return 0;
}