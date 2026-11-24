#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input, *output;
    int ch;

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    if (input == NULL || output == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(input)) != EOF) {
        fputc(toupper(ch), output);
    }

    fclose(input);
    fclose(output);

    printf("Text converted and written to output.txt successfully.\n");

    return 0;
}