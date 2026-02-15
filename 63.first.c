/*Create an array of 10 numbers. Verify using pointer arithmetic 
that (ptr+2) points to the third element where ptr is a pointer
pointing to the first element of the array*/
#include<stdio.h>

int main(){
    int a[]= {1,3,5,3,23,12,12,23,4,5};
    int *ptr = a;

    printf("the value at address %u is %d ",ptr+2,*(ptr+2));
    return 0;
}