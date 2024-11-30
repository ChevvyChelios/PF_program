
#include <stdio.h>

// Function to swap using call-by-value
void swapByValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("Inside swapByValue: a = %d, b = %d\n", a, b);
}

// Function to swap using call-by-reference
void swapByReference(int *a, int *b) {
    int temp;
    temp = *a; // Dereference to get the value at the address
    *a = *b;   // Assign the value of b to a
    *b = temp; // Assign the temp value to b

    printf("Inside swapByReference: *a = %d, *b = %d\n", *a, *b);
}

int main() {
    int x, y;

    // Input two numbers from the user
    printf("Enter two integers:\n");
    scanf("%d %d", &x, &y);

    // Display original values
    printf("Original values: x = %d, y = %d\n", x, y);

    // Swap using call-by-value
    swapByValue(x, y);
    printf("After swapByValue: x = %d, y = %d (no change)\n", x, y);

    // Swap using call-by-reference
    swapByReference(&x, &y);
    printf("After swapByReference: x = %d, y = %d\n", x, y);

    return 0;
}