// consturct 3 array for storing name,pricce and no of pages
#include<stdio.h>

int main(){
    char name[3];
    float price[3];
    int no_pages[3];
    
    printf("enter name,price and no of pages in 3 book\n");
    for(int i=0 ; i<3 ; i++)
    scanf(" %c %f %d", &name[i] , &price[i] , &no_pages[i]);
    printf("this is what u enetered\n");
    for(int i=0 ; i<3 ; i++)
    printf("%c %.2f %d\n",name[i],price[i],no_pages[i]);
    return 0;
}