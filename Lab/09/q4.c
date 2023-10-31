//programmer Dania Khan
//date 31-10-23
//description factorial using recusrion

#include <stdio.h>

int fact(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * fact(num - 1);
    }
}

int main() {
    int a;

    printf("Enter any number: ");
    scanf("%d", &a);

    if (a < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = fact(a);
        printf("Factorial of %d is %d\n", a, result);
    }

    return 0;
}
