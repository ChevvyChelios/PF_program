
#include<stdio.h>
void main(){
    int a, *b=&a, **c=&b;
    a = 15;
    **c = 25;
    *b = **c;
    printf("%d %d %d", a, *b, **c);
    printf("\n");
}