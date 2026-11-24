#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    int ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    int lastChar = '\n';

    file = fopen("info.txt", "r");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;
        lastChar = ch;

        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch)) {
            inWord = 0;
        } else if (inWord == 0) {
            words++;
            inWord = 1;
        }
    }

    /* Count the last line if it does not end with a newline */
    if (characters > 0 && lastChar != '\n') {
        lines++;
    }

    fclose(file);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}