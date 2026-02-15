// bubble sorting in an array
#include <stdio.h>

int main() {
    int arr[5]={5,3,6,4,2};
    int  j, temp;

    // Bubble Sort Logic
    for (j = 0; j < 4; j++) 
    {
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }
    

    printf("Sorted array in Ascending Order:\n");
    for (j = 0; j < 5; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}