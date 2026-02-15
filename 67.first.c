//Write a program containing functions Which counts the number of positive integers in an array
#include<stdio.h>

int count (int a[], int n)
{
int noofpositive;
    for(int i=0;i<n;i++)
    {
        if (a[i]>0) 
        {
            noofpositive++;
        }
    }
    return noofpositive;
}

int main()
{
    int a[]= {1,4,-6,3,6,-74,4,-6};
    printf("the no of positive integer is %d",count(a,8));    
    return 0;
}
