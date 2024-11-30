
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome
int isPalindrome(const char *str) {
    int left = 0; // Start from the beginning of the string
    int right = strlen(str) - 1; // Start from the end of the string

    while (left < right) {
        // Ignore non-alphanumeric characters and convert to lowercase for comparison
        while (left < right && !isalnum(str[left])) {
            left++;
        }
        while (left < right && !isalnum(str[right])) {
            right--;
        }

        // Compare characters
        if (tolower(str[left]) != tolower(str[right])) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Is a palindrome
}

int main() {
    char str[100];

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if present
    str[strcspn(str, "\n")] = 0;

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}