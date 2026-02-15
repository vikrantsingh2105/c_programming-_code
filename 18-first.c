#include<stdio.h>

int main(){
    int a;
    printf(" enter a:");
    scanf("%d", &a);

    switch(a){
        case 1:
        printf(" you entered 1\n");
        break; // break is used to exist the switch case otherwise it will print next cases also
        case 2:
        printf("you entered 2\n");
        break;
        case 3:
        printf("you entered 3\n");
        break;
        case 4:
        printf("you entered 4\n");
        break;
        default:
        printf("nothing is matched\n");
        break;

        
    }
    return 0;
}