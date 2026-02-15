// program to find minimum and maximum value of array
#include<stdio.h>

int main(){
    int a[5],max,min;
    printf("enter elements of array : ");
    for(int i=0; i<=4 ; i++)
    {
        scanf("%d",&a[i]);
    }
    /*for(int i=0; i<=4 ; i++)
    {
        printf("%d\t",a[i]);
    }*/
    max=a[0];
    min=a[0];
    for(int i=0 ; i<=4 ; i++)
    {
        if(a[i]>max)
        max = a[i];
        if(a[i]<min)
        min = a[i];
    }
    printf("maximum element = %d\n",max);
    printf("minimum element = %d\n",min);
    return 0;
}