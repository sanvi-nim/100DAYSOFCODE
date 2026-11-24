#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    int ch;
    int vowels = 0, consonants = 0, digits = 0, special = 0;

    file = fopen("input.txt", "r");

    if (file == NULL) {
        printf("Error: Unable to open input.txt\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) {
            ch = tolower(ch);

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(ch)) {
            digits++;
        } else if (!isspace(ch)) {
            special++;
        }
    }

    fclose(file);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}
