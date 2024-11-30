
#include <stdio.h>

void printPrimeFactors(int num) {
    
    while (num % 2 == 0) {
        printf("%d ", 2);
        num /= 2;
    }

    for (int i = 3; i * i <= num; i += 2) {

        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }

    if (num > 2) {
        printf("%d ", num);
    }
}

int main() {
    int number;

    printf("Enter a number to find its prime factors: ");
    scanf("%d", &number);

    printf("Prime factors of %d are: ", number);
    printPrimeFactors(number);
    printf("\n");

    return 0;
}