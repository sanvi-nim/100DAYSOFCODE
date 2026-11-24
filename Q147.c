
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e;
    FILE *fp;

    scanf("%d %49s %f",
          &e.id, e.name, &e.salary);

    fp = fopen("employee.dat", "wb");

    if(fp == NULL) {
        return 1;
    }

    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    fp = fopen("employee.dat", "rb");

    if(fp == NULL) {
        return 1;
    }

    fread(&e, sizeof(e), 1, fp);
    fclose(fp);

    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);

    return 0;
}
