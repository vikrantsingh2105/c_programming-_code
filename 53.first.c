/* Write a function to calculate force of attraction on a body of mass 'm' exerted by
earth. Consider g = 9.8m/s*/

#include<stdio.h>

float force (float);

//m = mass of the body
//g = acceleration due to gravity

int main(){
    float m;
    printf("enter m: ");
    scanf("%f",&m);

    printf("force of attraction on body by earth is %f",force(m));
}

float force (float x){
    float g=9.8;
    return x * g;
}