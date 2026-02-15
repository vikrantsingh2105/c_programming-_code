//Write a program to find greatest of four numbers entered by the user.
#include<stdio.h>

int main(){
    int a= 10, b = 34, c = 45, d=78;
    if (a>b && a>c && a>d){
        printf("the greatest is %d",a);
    }
    if (c>b && c>a && c>d){
        printf("the greatest is %d",c);
    }
    if (b>a && b>c && b>d){
        printf("the greatest is %d",b);
    }
    if (d>b && d>c && d>a){
        printf("the greatest is %d",d);
    }

    return 0;
}