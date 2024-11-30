
#include <stdio.h>

// Function to find the length of the longest increasing subsequence
int longestIncreasingSubsequence(int arr[], int n) {
    int lis[n]; // Array to store the longest increasing subsequence lengths
    int maxLength = 0;

    // Initialize LIS values for all indexes
    for (int i = 0; i < n; i++) {
        lis[i] = 1; // Each element is an increasing subsequence of length 1
    }

    // Compute the LIS values
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1) {
                lis[i] = lis[j] + 1; // Update LIS length
            }
        }
    }

    // Find the maximum length from the LIS array
    for (int i = 0; i < n; i++) {
        if (maxLength < lis[i]) {
            maxLength = lis[i];
        }
    }

    return maxLength;
}

int main() {
    int n;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the length of the longest increasing subsequence
    int length = longestIncreasingSubsequence(arr, n);

    // Output the result
    printf("Length of the longest increasing subsequence is: %d\n", length);

    return 0;
}