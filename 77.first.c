/*program to find a number and its frequency
in array*/
#include<stdio.h>

int main(){
    int num[]={34,12,45,32,65,89,83,89,56,98};
    int n,i,count;
    printf("enter an element to search\n");
    scanf("%d",&n);
    count = 0;
    for(i=0;i<=9;i++)
    {
        if(num[i]==n)
           count++;
    }
    printf("number %d is found %d time in the array\n",n,count);
    return 0;
}