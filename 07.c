
#include<stdio.h>
int main(){
    int num, reversedNum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int sign = (num<0) ? -1 : 1;

    num *= sign;

    printf("Reversed number: ");
    while (num != 0){
        reversedNum = (10*reversedNum) + (num%10);
        num /= 10;
    }
    printf("%d", reversedNum*sign);
    printf("\n");
    return 0;
}