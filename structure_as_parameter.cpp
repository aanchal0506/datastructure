#include <stdio.h>
#include <stdlib.h>

// Define the rectangle structure
struct rectangle {
    int length;
    int breadth;
};

// Define the Test structure with an array and a count
struct Test {
    int A[5];
    int n;
};

// Function to demonstrate array inside structure (call by value)
void array_inside_struct(struct Test t1) {
    t1.A[0] = 10;
    t1.A[1] = 90;
    t1.n = 5;

    printf("\nInside array_inside_struct (Call by Value):\n");
    for (int i = 0; i < t1.n; i++) {
        printf("A[%d] = %d\n", i, t1.A[i]);
    }
}

// Function that returns a pointer to a dynamically allocated rectangle
struct rectangle* fun() {
    struct rectangle *p;
    p = (struct rectangle *)malloc(sizeof(struct rectangle));
    p->length = 400;
    p->breadth = 800;
    return p;
}

// Function that takes structure by value
void displayByValue(struct rectangle r) {
    printf("\n[Call by Value] Length: %d, Breadth: %d\n", r.length, r.breadth);
    r.length = 100;
    r.breadth = 200;
    printf("[Modified Inside Function] Length: %d, Breadth: %d\n", r.length, r.breadth);
}

// Function that takes structure by address
void displayByAddress(struct rectangle *r) {
    printf("\n[Call by Address] Length: %d, Breadth: %d\n", r->length, r->breadth);
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
    printf("[After Call by Value] Length = %d, Breadth = %d\n", ptr->length, ptr->breadth);

    // Call by address
    displayByAddress(ptr);
    printf("[After Call by Address] Length = %d, Breadth = %d\n", ptr->length, ptr->breadth);

    // Free allocated memory
    free(ptr);

    // Demonstrate array inside structure
    struct Test t1 = {{1, 2, 3, 4, 5}, 5};
    array_inside_struct(t1);

    return 0;
}
