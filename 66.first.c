//Write a program containing a function which reverses the array passed to it
#include<stdio.h>

void printa(int a[], int n){
    for (int i=0; i<n;i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}

void rev(int a[], int n){
    int t;
    for(int i=0;i<n/2;i++)
    {
        t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]= t;     
    }
}
int main(){
    int a[]= {1,2,3,4,5,6};
    printa(a,6);
    rev( a ,6 );
    printa(a,6);
    return 0;
}