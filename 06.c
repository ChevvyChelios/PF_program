#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the series: ");
    scanf("%d", &n);
    int n1=0, n2=1;
    printf("\nFibonacci series: 0 1 ");
    for (int i=0; i<n-2; i++){
        n2 = n1 + n2;
        printf("%d ", n2);
        n1 = n2 - n1;
    }
    printf("\n");
    return 0;
}

// #include<stdio.h>
// int main(){
//     int n = 10, next;
//     int n1=0, n2=1;
//     printf("\nFibonacci series: ");
//     for (int i=0; i<n; i++){
//         if (i<=1)
//             next = i;
//         else {
//             next = n1 + n2;
//             n1 = n2;
//             n2 = next;
//         }
//         printf("%d ", next);
//     }
//     printf("\n");
//     return 0;
// }