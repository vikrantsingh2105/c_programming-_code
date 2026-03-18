// program to reverse an array
#include<stdio.h>

    void printArray(int a[],int n){
        for(int i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
        }
        printf("\n");
    }

    void reverse(int a[],int n){
        int temp;
        for (int i=0;i<n/2;i++)
        {
            temp=a[i];
            a[i]=a[n-i-1];
            a[n-i-1]= temp;
        }
    }

int main(){
    int a[]={1,2,3,4,5,6};
    printArray(a,6);
    reverse(a,6);
    printArray(a,6);    
    return 0;
}