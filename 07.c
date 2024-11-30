
#include <stdio.h>

int reverseInteger(int num) {
    int reversed = 0;
    int sign = (num < 0) ? -1 : 1; // Store the sign of the number
    num = (num < 0) ? -num : num; // Make num positive for reversal

    while (num != 0) {
        int digit = num % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Append it to the reversed number
        num /= 10; // Remove the last digit from num
    }

    return reversed * sign; // Restore the original sign
}

int main() {
    int number;

    // Input an integer from the user
    printf("Enter an integer to reverse: ");
    scanf("%d", &number);

    // Reverse the integer
    int reversedNumber = reverseInteger(number);

    // Output the reversed integer
    printf("Reversed integer: %d\n", reversedNumber);

    return 0;
}