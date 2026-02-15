//Write a program to print the address of a variable. Use this address to get the value of the variable
#include<stdio.h>

int main(){
    int i=2;
    int* j=&i;
    printf("the address of i is %u\n", &i);
    printf("the value at i is %d\n", *j);
    return 0;
}