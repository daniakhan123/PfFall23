//programmer: Dania khan
// date : 22-10-2023
//Deccription: matrix is symmetric or not


#include <stdio.h>

int main() {
    int r, c, i, j;

    printf("Rows of Matrix: ");
    scanf("%d", &r);
    printf("Columns of Matrix: ");
    scanf("%d", &c);

    int arr[r][c]; // Declare the array with the given dimensions

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Enter number at [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the matrix
    printf("Matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Check if the matrix is symmetric
    int symmetric = 1; // Assume it's symmetric by default
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (arr[i][j] != arr[j][i]) {
                symmetric = 0; // If any element is not equal to its transpose, it's not symmetric
                break;
            }
        }
        if (symmetric == 0) {
            break;
        }
    }

    if (symmetric == 1) {
        printf("Matrix is symmetric.\n");
    } else {
        printf("Matrix is not symmetric.\n");
    }

    return 0;
}

