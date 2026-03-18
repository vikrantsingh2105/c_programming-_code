#include<stdio.h>

int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    int a[n];

    for(int i=0; i<10; i++)
    {
        a[i]=n*(i+1);
    }
    for(int i=0; i<10; i++)
    {
        printf("the value of %d x %d = %d\n",n,i+1,a[i]);
    }
    return 0;
}