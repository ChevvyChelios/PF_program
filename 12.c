
#include <stdio.h>

// Function to calculate the sum of array elements using pointers
int sumOfArray(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i); // Accessing elements using pointer arithmetic
    }
    return sum;
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

    // Calculate the sum using the sumOfArray function
    int total = sumOfArray(arr, n);

    // Output the result
    printf("The sum of all elements in the array is: %d\n", total);

    return 0;
}