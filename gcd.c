#include<stdio.h>
int main(){
    int a,b,temp;
    scanf("%d %d", &a, &b);
    if (a > b){
        temp = a;
        a = b;
        b = temp;
    }

    while ((b%a) != 0){
        temp = b%a;
        b = a;
        a = temp;
    }

    printf("%d\n", a);
    return 0;
}