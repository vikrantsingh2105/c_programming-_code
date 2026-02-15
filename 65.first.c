//Repeat 64.first.c for a general input provided by the user using scanf
#include<stdio.h>

int main(){
    int n;
    printf("enter n:");
    scanf("%d", &n);
    int a[10];
    
    for(int i=0;i<10;i++)
    {
        a[i]= n*(i+1);
    }

    for(int i=0;i<10;i++)
    {
        printf("%d * %d = %d\n",n, (i+1), a[i]);
    }
    return 0;
}