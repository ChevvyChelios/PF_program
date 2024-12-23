#include <stdio.h>

#define MAX 20 // Maximum size of the matrix

void printTriangle(int arr[20][20], int n){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i>=j)
                printf("%d ", arr[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

int main() {
    int n, i, j;
    int matrix[MAX][MAX];
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter the elements of the lower triangular matrix:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printTriangle(matrix,n);

    return 0;
}