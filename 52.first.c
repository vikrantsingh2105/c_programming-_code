// change celsius to fahrenheit by function 
#include<stdio.h>
float c2f(float);

int main(){
    float celsius;
    printf("temp in celsius:   ");
    scanf("%f",& celsius);

    printf("temp in fahrenheit is %.2f", c2f(celsius));
}

float c2f(float celsius)
{
    return (9.0/5.0) * celsius + 32;
}