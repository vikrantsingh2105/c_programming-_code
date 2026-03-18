//program to write table given by user in 2d array
#include<stdio.h>

int main(){
    int n1,n2,n3;
    printf("enter 3 tables you want to write:");
    scanf("%d %d %d",&n1,&n2,&n3);
    int a[3][10];
    int mul[]={n1,n2,n3};

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