
#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int digitalRoot(int num) {
    while (num >= 10) {
        num = sumOfDigits(num);
    }
    return num;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = digitalRoot(number);
    
    printf("The sum of the digits until a single digit is obtained: %d\n", result);

    return 0;
}