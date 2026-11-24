
#include <stdio.h>

enum Gender {MALE, FEMALE, OTHER};

struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;
    int n;

    scanf("%d", &n);
    p.gender = n;

    switch (p.gender) {
        case MALE:
            printf("Male");
            break;

        case FEMALE:
            printf("Female");
            break;

        case OTHER:
            printf("Other");
            break;

        default:
            printf("Invalid gender");
    }

    return 0;
}
