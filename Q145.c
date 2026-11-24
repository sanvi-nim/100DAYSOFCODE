
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student topper(struct Student s[], int n) {
    int max = 0;

    for(int i = 1; i < n; i++) {
        if(s[i].marks > s[max].marks) {
            max = i;
        }
    }

    return s[max];
}

int main() {
    struct Student s[5], top;

    for(int i = 0; i < 5; i++) {
        scanf("%49s %d %f",
              s[i].name,
              &s[i].roll_no,
              &s[i].marks);
    }

    top = topper(s, 5);

    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
