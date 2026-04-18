//insertion in array
#include<stdio.h>

int main(){
    int a[30]={2,3,4,5,6,7,8};
    int p,v,i;
    int n=7;
    printf("enter position and value:");
    scanf("%d %d",&p,&v);
    for(i=n;i>=p;i--)
    {
        a[i]=a[i-1];
    }
    a[p-1]=v;
    printf("after insertion:\n");
    for(i=0;i<8;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}