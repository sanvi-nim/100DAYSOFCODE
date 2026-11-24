#include <stdio.h>

int main() {
    FILE *file;
    int number, count = 0;
    int sum = 0;
    float average;

    file = fopen("numbers.txt", "r");

    if (file == NULL) {
        printf("Error: Unable to open numbers.txt\n");
        return 1;
    }

    while (fscanf(file, "%d", &number) == 1) {
        sum += number;
        count++;
    }

    fclose(file);

    if (count == 0) {
        printf("No integers found in the file.\n");
    } else {
        average = (float)sum / count;

        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    }

    return 0;
}
