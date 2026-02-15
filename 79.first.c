// program to increase every value of array by a number n
#include<stdio.h>

int main(){
    int a[4]={3,4,2,7};
    int n;
    printf("enter value of n:  ");
    scanf("%d",&n);

    printf("now new value of a[4]is ");
    for(int i=0 ; i<=3 ; i++)
    {
        printf("%d\t", a[i]+n);
    }
    return 0;
}