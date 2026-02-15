#include <stdio.h>

int main() {
    // Note: 'name' here stores only 1 character per book.
    char name[3];
    float price[3];
    int no_pages[3];
    
    printf("Enter name (1 char), price, and pages for 3 books:\n");
    
    for(int i = 0; i < 3; i++) {
        // The space before %c is the magic fix!
        scanf(" %c %f %d", &name[i], &price[i], &no_pages[i]);
    }
    
    printf("\nThis is what you entered:\n");
    for(int i = 0; i < 3; i++) {
        // Added formatting for price (%.2f) and spaces for readability
        printf("Book: %c | Price: %.2f | Pages: %d\n", name[i], price[i], no_pages[i]);
    }
    
    return 0;
}