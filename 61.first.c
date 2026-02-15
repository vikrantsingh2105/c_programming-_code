//Try 58.first.c using call by value and verify that it does not change the value of the said variable
#include<stdio.h>

void changeto10times(int);

int main(){
    int i=44;
    printf("value of i is %d\n", i);
    changeto10times(i); 
    printf("value of i is %d\n", i);    
}

void changeto10times(int x){
    x = x * 10;
}