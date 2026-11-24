
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;

    scanf("%49s", ptr->name);
    scanf("%d", &ptr->roll_no);
    scanf("%f", &ptr->marks);

    ptr->marks = ptr->marks + 5;

    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
