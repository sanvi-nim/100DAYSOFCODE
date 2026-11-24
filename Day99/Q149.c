
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student *s;

    s = malloc(sizeof(struct Student));

    if(s == NULL) {
        return 1;
    }

    scanf("%49s", s->name);
    scanf("%d", &s->roll_no);
    scanf("%f", &s->marks);

    printf("Name: %s\n", s->name);
    printf("Roll Number: %d\n", s->roll_no);
    printf("Marks: %.2f\n", s->marks);

    free(s);

    return 0;
}
