
//programmer:Dania Khan
//date: 29/10/23
//desc: submatrix

#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main() {
    int rows, cols, k, l, m;
    
    printf("Input number of rows: ");
    scanf("%d", &rows);
    
    printf("Input number of columns: ");
    scanf("%d", &cols);

    int arr[MAX_ROWS][MAX_COLS];

    printf("Enter 1s and 0s only:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element no [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n\nMatrix Entered:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    int max = 0;
    int i, j, row = 0, col = 0;

    for (i = 1; i < rows; i++) {
        for (j = 1; j < cols; j++) {
            if (arr[i][j] == 1) {
                k = arr[i - 1][j - 1];
                l = arr[i][j - 1];
                m = arr[i - 1][j];

                if (k < l && k < m) {
                    arr[i][j] = k + 1;
                } else if (l < m) {
                    arr[i][j] = l + 1;
                } else {
                    arr[i][j] = m + 1;
                }
                if (arr[i][j] > max) {
                    max = arr[i][j];
                    row = i;
                    col = j;
                }
            }
        }
    }

    int index1 = row - max + 1;
    int index2 = col - max + 1;

    printf("\nThe maximum square matrix has dimensions %d*%d.\n", max, max);
    printf("It starts from element no [%d][%d] and ends on element no [%d][%d]\n", index1, index2, row, col);

    return 0;
}

