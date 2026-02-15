//linear search in array 
#include<stdio.h>

int main()
{
    int a[]={5,7,8,9,6,1};
    int n,c=0;
    printf("enter a number ");
    scanf("%d",&n);

    for(int i=0;i<=5;i++)
    {
        if(a[i]== n)
        {
        printf("element found at %d location",i+1);
        c++;
        }
    }
    if(c==0)
    {
        printf("number not found");
    }
}