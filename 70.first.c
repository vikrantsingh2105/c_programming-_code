//Create a three-dimensional array and print the address of its elements in increasing order
#include<stdio.h>

int main(){
    int a[2][5][6];
        for( int i=0 ; i<2 ; i++)
        {
            for( int j=0 ; j<5 ; j++)
            {
                for( int k=0 ; k<6 ; k++)
                {
                printf("%u  ", &a[i][j][k]);
                }
            }
        }
    
}
