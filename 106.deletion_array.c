//deletion in array
#include<stdio.h>

int main(){
    int a[30]={2,3,4,5,6,7,8};
    int p,i;
    int n=7;
    printf("enter position to delete:");
    scanf("%d",&p);
    for(i=p-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    printf("after deletion:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}