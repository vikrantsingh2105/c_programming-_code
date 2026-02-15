// Write a program to determine whether à character entered by the user is lowercase or not.
#include<stdio.h>

int main(){
    char ch = 'k';
    printf("the charcter is %c\n",ch);
    printf("the value of the character is %d\n", ch);

    if(ch>=97 && ch<=122)
    {
        printf("the character is lowercase");
    }
    else{
        printf("the character is not lowercase");
    }
    return 0;
}