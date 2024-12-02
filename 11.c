
#include <stdio.h>

void swapByValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("Inside swapByValue: a = %d, b = %d\n", a, b);
}


void swapByReference(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    printf("Inside swapByReference: *a = %d, *b = %d\n", *a, *b);
}

int main() {
    int x, y;

    // Input two numbers from the user
    printf("Enter two integers: ");
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