
#include <stdio.h>

int main() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1; // Exit the program if the size is invalid
    }

    int arr[n];

    // Input the elements of the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and smallest with the first element
    int largest = arr[0];
    int smallest = arr[0];

    // Loop through the array to find largest and smallest elements
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update largest
        }
        if (arr[i] < smallest) {
            smallest = arr[i]; // Update smallest
        }
    }

    // Output the largest and smallest elements
    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}