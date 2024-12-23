#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fp1, *fp2;
    fp1 = fopen("Hello.txt", "a+");
    fp2 = fopen("alu.txt", "r");
    if (NULL == fp1 || NULL == fp2){
        printf("Error opening file\n");
        return EXIT_FAILURE;
    }

    char c;
    while ((c = fgetc(fp2)) != EOF){
        fputc(c, fp1);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}