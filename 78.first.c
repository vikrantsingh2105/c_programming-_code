//program to store and print 10 integer by array
#include<stdio.h>

int main(){
    int number[10];

    //storing element
    printf("enter 10 integers: \n");
    for(int i=0 ; i<10 ; i++)
    {
        printf("element %d:\t", i+1);
        scanf("%d", &number[i]);
    }

    //printing element
    printf("the elements u entered are: \n");
    for(int i=0 ; i<10 ; i++)
    {
        printf("%d\t",number[i]);
    }
    return 0;
}