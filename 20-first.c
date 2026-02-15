/*in this code it should show "i am not 11" but due to mistake in if operator 
 we have to use '==' instead of '=' to compare values
 '=' is used for assigning values so by writing 'if (a =11)' 
 we are assigning new value to a which is equal to 11*/
 #include<stdio.h>

int main(){
    int a = 10;

    if (a =11) 
       printf ("I am 11");
    else
       printf (" I am not 11");
    return 0;
}
