
#include <stdio.h>
#include <string.h>

void compressString(const char *input, char *output) {
    int count = 1; // Initialize count of current character
    int j = 0; // Index for output string

    // Traverse the input string
    for (int i = 0; i < strlen(input); i++) {
        // If the next character is the same as the current one, increment count
        if (input[i] == input[i + 1]) {
            count++;
        } else {
            // If count is greater than 1, append the count to output
            output[j++] = input[i]; // Append the current character
            if (count > 1) {
                j += sprintf(&output[j], "%d", count); // Append count
            }
            count = 1; // Reset count for the next character
        }
    }
    output[j] = '\0'; // Null-terminate the output string
}

int main() {
    char input[100]; // Input string
    char output[200]; // Output string for compressed result

    // Input the string from the user
    printf("Enter a string to compress: ");
    scanf("%s", input);

    // Compress the string
    compressString(input, output);

    // Output the compressed string
    printf("Compressed string: %s\n", output);

    return 0;
}