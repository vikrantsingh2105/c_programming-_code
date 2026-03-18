//program to write table given by user in 2d array
#include<stdio.h>

int main(){
    int n1,n2,n3;
    printf("enter 3 tables you want to write:");
    scanf
    int a[3][10];
    int mul[]={2,3,7};

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<10;j++)
        {
            a[i][j]= mul[i]*(j+1);
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<10;j++)
        {
            printf("%d x %d = %d\n",mul[i],(j+1),a[i][j]);
        }
        printf("\n");        
    }
    return 0;
}