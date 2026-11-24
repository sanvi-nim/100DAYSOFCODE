#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char text[500];

    printf("Enter the file name: ");
    scanf("%s", filename);
    getchar();  // remove newline left by scanf

    file = fopen(filename, "a");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("Enter a new line of text: ");
    fgets(text, sizeof(text), stdin);

    fprintf(file, "%s", text);

    fclose(file);

    printf("Text appended successfully.\n");

    return 0;
}