#include <stdio.h>
#include<math.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int start, end;

    printf("Enter two numbers (start and end): ");
    scanf("%d %d", &start, &end);

    if (start > end) {
        printf("Invalid range. Start should be less than or equal to end.\n");
        return 1;
    }

    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}