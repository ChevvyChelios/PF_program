#include <stdio.h>

void generateFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}

int main() {
    int n;

    // Input the number of Fibonacci numbers to generate
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);

    // Generate the Fibonacci numbers
    generateFibonacci(n);

    return 0;
}