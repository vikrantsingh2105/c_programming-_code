//interchange adjacent element of array//
#include<stdio.h>

int main(){
    int num[]={23,34,56,67,78,89,86,90,87,54};
    int t;
    for(int i = 0 ; i <= 9; i=i+2)
    {
        t=num[i];
        num[i]=num[i+1];
        num[i+1]=t;
    }
    for(int i = 0 ; i <= 9 ; i++)
    {
        printf("%d\t",num[i]);
    }
    return 0;
}