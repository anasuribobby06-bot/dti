#include <stdio.h>

int main() {
    FILE *file;
    char text[100];

    /* 1. Write text to a file */
    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fprintf(file, "Hello, this is the first line.\n");
    fclose(file);

    /* 2. App*
