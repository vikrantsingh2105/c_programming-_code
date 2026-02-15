//program for searching an element in array
#include <stdio.h>

int main() {
    int arr[5]={3,5,7,8,4};
    int i, searchElement, found = 0;

    printf("Enter the element you want to search for: ");
    scanf("%d", &searchElement);

    // Linear Search Logic
    for (i = 0; i < 5; i++) {
        if (arr[i] == searchElement) {
            printf("Element %d found at position %d (Index %d).\n", searchElement, i + 1, i);
            found = 1; 
            break; // Stop searching once we find it
        }
    }

    if (found==0) {
        printf("Element %d not found in the array.\n", searchElement);
    }

    return 0;
}