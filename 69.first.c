//Repeat 68.first.c for a custom input given by the user
#include<stdio.h>

int main(){
    int n1, n2 , n3;
    printf(" enter numbers:\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    int a [3][10];
    int mul[]= {n1,n2,n3};
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<10;j++)
            {
                a[i][j]= mul[i] * (j+1);
            }
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<10;j++)
            {
                printf("%d x %d = %d\n",mul[i],(j+1),a[i][j]);
            }
        printf("\n");    
        }
} 