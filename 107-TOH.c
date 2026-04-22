#include<stdio.h>

void TOH(int,char,char,char);

int main(){
    int n;
    printf("enter number of plates");
    scanf("%d",&n);
    TOH(n,'a','b','c');    
    return 0;
}

void TOH(int n,char A,char B,char C)
{
    if(n>1)
    {
        TOH(n-1,A,C,B);
        printf("shift plate %d from %c to %c\n",n,A,C);
        TOH(n-1,B,A,C);    
    }
    else{
        printf("shift plate %d from %c to %c\n",n,A,C);
    }
}