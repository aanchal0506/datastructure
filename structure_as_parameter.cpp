#include <stdio.h>
#include <stdlib.h>

// Define the structure
struct rectangle {
    int length;
    int breadth;
};

// Function that returns a pointer to a dynamically allocated rectangle
struct rectangle* fun() {
    struct rectangle *p;
    // Allocate memory on heap
    p = (struct rectangle *)malloc(sizeof(struct rectangle));
    // Assign values
    p->length = 400;
    p->breadth = 800;
    // Return the address of the allocated structure
    return p;
}

// Function that takes structure by value (copy)
void displayByValue(struct rectangle r) {
    printf("\n[Call by Value] Length: %d, Breadth: %d\n", r.length, r.breadth);
    // Modifying r won't affect original
    r.length = 100;
    r.breadth = 200;
    printf("[Modified Inside Function] Length: %d, Breadth: %d\n", r.length, r.breadth);
}

// Function that takes structure by address (reference)
void displayByAddress(struct rectangle *r) {
    printf("\n[Call by Address] Length: %d, Breadth: %d\n", r->length, r->breadth);
    // Modifying r will affect original
    r->length = 300;
    r->breadth = 600;
    printf("[Modified Inside Function] Length: %d, Breadth: %d\n", r->length, r->breadth);
}

int main() {
    // Create a rectangle using fun()
    struct rectangle *ptr = fun();

    // Display original values
    printf("Original (from fun): Length = %d, Breadth = %d\n", ptr->length, ptr->breadth);

    // Call by value
    displayByValue(*ptr);
    // Check if original changed
    printf("[After Call by Value] Length = %d, Breadth = %d\n", ptr->length, ptr->breadth);

    // Call by address
    displayByAddress(ptr);
    // Check if original changed
    printf("[After Call by Address] Length = %d, Breadth = %d\n", ptr->length, ptr->breadth);

    // Free allocated memory
    free(ptr);

    return 0;
}
