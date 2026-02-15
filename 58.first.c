//Write a program to change the value of a variable to ten times of its current I value
#include<stdio.h>

void changeto10times(int*);

int main(){
    int i=44;
    printf("value of i is %d\n", i);
    changeto10times(&i); 
    printf("value of i is %d\n", i);    
}

void changeto10times(int* x){
    *x = *x * 10;
}