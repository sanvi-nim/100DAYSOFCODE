
#include <stdio.h>

enum Status {SUCCESS, FAILURE, TIMEOUT};

int main() {
    enum Status s;
    int n;

    scanf("%d", &n);
    s = n;

    switch (s) {
        case SUCCESS:
            printf("Success");
            break;
        case FAILURE:
            printf("Failure");
            break;
        case TIMEOUT:
            printf("Timeout");
            break;
        default:
            printf("Invalid input");
    }

    return 0;
}
