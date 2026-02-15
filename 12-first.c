#include<stdio.h>

int main(){
    // explain step by stepevaluation of 3*x/y - z + k,
    int x = 2, y = 3 , z = 3 , k = 1;
    float e = 3*x/y - z + k;
    // 3*x/y - z + k
    // 6/y - z + k 
    // 2 - z + k 
    // -1 + k
    // 0
    printf("the value of e is %f",e);
    
    return 0;
}