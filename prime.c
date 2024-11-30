#include<stdio.h>
#include<math.h>
int main(){
    int n, i=2;
    double limit;
    scanf("%d", &n);
    limit = sqrt(n);
    // pow(n, 1/2)
    for (i=2; i<=limit; i++){
        if (n%i == 0){
            printf("Not prime\n");
            break;
        }
    }
    if (i>limit)
        printf("Yes prime\n");
    
    return 0;
}