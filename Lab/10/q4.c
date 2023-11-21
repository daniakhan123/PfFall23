#include <stdio.h>

struct employeedetail {
    char name[20];
    int salary;
    int hourswork;
};

int main() {
    struct employeedetail d[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Enter the detail of the %d employee:\n", i + 1);
        printf("Enter the name of the employee: ");
        scanf("%s", d[i].name);
        printf("Enter the salary of the employee: ");
        scanf("%d", &d[i].salary);
        printf("Enter the hours of work of the employee: ");
        scanf("%d", &d[i].hourswork);
    }

    for (i = 0; i < 10; i++) {
        if (d[i].hourswork == 8) {
            d[i].salary = d[i].salary + 50;
        } else if (d[i].hourswork == 10) {
            d[i].salary = d[i].salary + 100;
        } else if (d[i].hourswork >= 12) {
            d[i].salary = d[i].salary + 150;
        }
    }

    printf("\nEmployee details after salary adjustments:\n");
    for (i = 0; i < 10; i++) {
        printf("Name: %s\t", d[i].name);
        printf("Salary: %d\n", d[i].salary);
    }
