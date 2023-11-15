//Programmer Dsnia Khsn
//Date : 30/10/23
//Description : printing spiral matrix



#include <stdio.h>

int main() {
    int n, c;
    printf("Enter the order for your spiral matrix: ");
    scanf("%d", &n);

    int spiral[100][100] = {0};
    int i = 0;
    int j = 0;
    int a = 1;
    int k = 0;
    int l = 0;
    int N = n;

    while (a <= N * N) {
        for (j = j; j < n; j++) {
            spiral[i][j] = a;
            a++;
        }

        j = n - 1;
        for (i = i + 1; i < n; i++) {
            spiral[i][j] = a;
            a++;
        }

        i = n - 1;
        for (j = j - 1; j > k; j--) {
            spiral[i][j] = a;
            a++;
        }

        for (i = n - 1; i > l; i--) {
            spiral[i][j] = a;
            a++;
        }

        i++;
        j++;
        n--;

        k++;
        l++;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", spiral[i][j]);
        }
        printf("\n");
    }
    //reset for inward sprial

    n = N;

    int spiral1[100][100] = {0};
    i = 0;
    j = n - 1;
    a = n * n;
    k = 0;
    l = 0;

    if (n % 2 != 0) {
        spiral1[(n - 1) / 2][(n - 1) / 2] = 1;
    }

    while (a > 1) {
        for (j = j; j > k; j--) {
            spiral1[i][j] = a;
            a--;
        }

        for (i = i; i < n - 1; i++) {
            spiral1[i][j] = a;
            a--;
        }

        for (j = j; j < n - 1; j++) {
            spiral1[i][j] = a;
            a--;
        }

        for (i = i; i > l; i--) {
            spiral1[i][j] = a;
            a--;
        }

        i++;
        j--;
        n--;

        k++;
        l++;
    }

    printf("\n\nInwards Spiral Matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", spiral1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
