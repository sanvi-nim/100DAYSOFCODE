#include <stdio.h>

int main() {
    FILE *file;
    int n, i;
    char name[50];
    int roll;
    float marks;

    file = fopen("students.txt", "w");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%49s", name);

        printf("Roll number: ");
        scanf("%d", &roll);

        printf("Marks: ");
        scanf("%f", &marks);

        fprintf(file, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(file);

    file = fopen("students.txt", "r");

    if (file == NULL) {
        printf("Error reading file.\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    printf("Name\tRoll Number\tMarks\n");

    while (fscanf(file, "%49s %d %f", name, &roll, &marks) == 3) {
        printf("%s\t%d\t\t%.2f\n", name, roll, marks);
    }

    fclose(file);

    return 0;
}