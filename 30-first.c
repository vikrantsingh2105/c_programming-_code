//Quick Quiz: Write a program to print first 'n' natural number using do-while loop.
//input=4 then output= 1,2,3,4 
#include<stdio.h>

int main(){
    int n, i=1;
    printf("enter n:");
    scanf("%d", &n);

    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=n);
    
    return 0;
}