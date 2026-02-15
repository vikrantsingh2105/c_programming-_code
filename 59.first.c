//Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main()
#include<stdio.h>

int* sum(int , int );
float* avg(int , int );

int* sum(int x, int y)
{
    int s=x+y;
    int* ptr1 = &s;
    printf("sum is %d\n", s);
    return ptr1;
}

float* avg(int x1, int y1){
    float avg =(x1+y1)/2.0;
    float* ptr2 = &avg;
    printf("average  is %f\n", avg);
    return ptr2;
}
int main()
{
    int a=4;
    int b=5;
    int* ptr1;
    float* ptr2;

    ptr1=sum(a,b);
    ptr2=avg(a,b);

    printf("the address of sum is %u and of average is %u\n",ptr1,ptr2);
}