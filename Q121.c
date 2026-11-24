#include <stdio.h>

int main() {
    FILE *file;
    char name[100];
    int age;

    file = fopen("info.txt", "w");

    if (file == NULL) {
        printf("Unable to create the file.\n");
        return 1;
    }

    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(file, "Name: %s\nAge: %d\n", name, age);

    fclose(file);

    printf("Data was successfully saved to info.txt.\n");

    return 0;
}