
#include <stdio.h>

int sumOfArray(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i); 
    }
    return sum;
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int total = sumOfArray(arr, n);

    printf("The sum of all elements in the array is: %d\n", total);

    return 0;
}