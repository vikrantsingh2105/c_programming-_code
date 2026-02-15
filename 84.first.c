//structure for books name,price and no of pages 
#include<stdio.h>

int main(){
    struct book
    {
        char name[50];float price;int pages;
    };
    struct book b1,b2,b3;

    printf("enetr name,price & no of pages of 3 books\n");
    scanf(" %c %f %d",&b1.name,&b1.price,&b1.pages);
    scanf(" %c %f %d",&b2.name,&b2.price,&b2.pages);
    printf("and thisis what u enetered\n");
    scanf(" %c %f %d",&b3.name,&b3.price,&b3.pages);
    return 0;
}