
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *file;
    char filename[100];
    char ch;

    printf("File name: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL){
        perror("Error opening file.\n");
        return EXIT_FAILURE;
    }

    printf("Contents are: \n");
    while((ch = fgetc(file)) != EOF){
        putchar(ch);
    }

    fclose(file);

    printf("\n");
    return EXIT_SUCCESS;
}