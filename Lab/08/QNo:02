//proframmer: Dania Khan
//Date:24-10-2023
//Description:performing Arthematic operations

#include <stdio.h>

void add(int a, int b) {
    int ans = a + b;
    printf("%d\n", ans);
}

void div(int a, int b) {
    int ans = a / b;
    printf("%d\n", ans);
}

void sub(int a, int b) {
    int ans = a - b;
    printf("%d\n", ans);
}

void mul(int a, int b) {
    int ans = a * b;
    printf("%d\n", ans);
}

int main() {
    int a, b;
    char op;
    printf("Enter integer a: ");
    scanf("%d", &a);
    printf("Enter integer b: ");
    scanf("%d", &b);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    if (op == '+') {
        add(a, b);
    } else if (op == '-') {
        sub(a, b);
    } else if (op == '*') {
        mul(a, b);
    } else if (op == '/') {
        div(a, b);
    } else {
        printf("Invalid operator\n");
    }

    return 0;
}
