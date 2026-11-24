
#include <stdio.h>

enum Menu {ADD = 1, SUBTRACT, MULTIPLY};

int main() {
    enum Menu choice;
    int n, a, b;

    scanf("%d", &n);
    scanf("%d %d", &a, &b);

    choice = n;

    switch (choice) {
        case ADD:
            printf("%d", a + b);
            break;

        case SUBTRACT:
            printf("%d", a - b);
            break;

        case MULTIPLY:
            printf("%d", a * b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
