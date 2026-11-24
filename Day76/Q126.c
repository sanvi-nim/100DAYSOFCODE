#include <stdio.h>

int main() {
    char filename[100];
    FILE *file;
    int ch;

    printf("Enter filename: ");
    scanf("%99s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
    } else {
        printf("\nFile content:\n");

        while ((ch = fgetc(file)) != EOF) {
            putchar(ch);
        }

        fclose(file);
    }

    return 0;
}
