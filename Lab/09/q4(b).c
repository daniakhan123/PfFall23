// programmer dania khan
// dec printing fibonacci series using recursion

#include<stdio.h>

void fibo(int n, int i, int j) {
    if (n > 0) {
        int k = i + j;
        printf("%d ", k);
        fibo(n - 1, j, k); 
    }
}

int main() {
    int a = 7;

    int i = 0, j = 1;
    printf("Fibonacci series up to %d terms: ", a);  
    printf("%d %d ", i, j);
    fibo(a - 2, i, j);

    return 0;
}
