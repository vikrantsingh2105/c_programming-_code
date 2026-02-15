//structure for books name,price and no of pages 
#include<stdio.h>

int main(){
    struct book
    {
        char name[50];float price;int pages;
    };
    struct book b1,b2,b3;

    printf("enter name,price & no of pages of 3 books\n");
    scanf(" %s %f %d",b1.name,&b1.price,&b1.pages);
    scanf(" %s %f %d",b2.name,&b2.price,&b2.pages);
    scanf(" %s %f %d",b3.name,&b3.price,&b3.pages);
    printf("and this is what u enetered\n");
    printf(" %s %f %d\n",b1.name,b1.price,b1.pages);
    printf(" %s %f %d\n",b2.name,b2.price,b2.pages);
    printf(" %s %f %d\n",b3.name,b3.price,b3.pages);
    return 0;
}
