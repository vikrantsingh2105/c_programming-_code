#include<stdio.h>

int main(){
    int age;
    printf("enter your age :");
    scanf("%d", &age);

    // in else if ladder,once a condition is true,rest are not checked
    if(age>60){
        printf("you can drive\nyou are a senior citizen\n");
    }
    else if(age>40){
        printf("you can drive\nyou are elder\n");
    }
    else if(age>18){
        printf("you can drive\nyou are adult\n");
    }
    else{
        printf("you cannot drive\nyou are underage yet\n");
    }
    return 0;
}