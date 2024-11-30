
#include <stdio.h>
#include <string.h>

// Function to reverse a string using pointers
void reverseString(char *str) {
    char *start = str; // Pointer to the start of the string
    char *end = str + strlen(str) - 1; // Pointer to the end of the string
    char temp;

    // Swap characters from start and end until they meet in the middle
    while (start < end) {
        // Swap the characters
        temp = *start;
        *start = *end;
        *end = temp;

        // Move the pointers towards the middle
        start++;
        end--;
    }
}

int main() {
    char str[100]; // Declare a string with a maximum length of 99 characters

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if it exists
    str[strcspn(str, "\n")] = '\0';

    // Reverse the string
    reverseString(str);

    // Output the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}