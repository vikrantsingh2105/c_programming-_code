//Quick Quiz: Create a 2-d array by taking input from the user. Write a display function to print the content of this 2-d array on the screen
#include<stdio.h>

int main(){
    int a[3][2];

    for(int i =0; i<3 ; i++)
    {
        for(int j=0 ; j<2 ; j++)
        {
            printf("enter the value of a[%d][%d]\n",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    
    for(int i =0; i<3 ; i++)
    {
        for(int j=0 ; j<2 ; j++)
        {
            printf("the value of a[%d][%d] is %d\n",i,j,a[i][j]);
        }
    }
}