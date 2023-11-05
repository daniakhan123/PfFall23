///Programmer: Dania Khan
///Date: 10-oct-2023
/// Description : rotation of array

#include <stdio.h>

void rotate_left(int arr[], int n, int integer) {
    for (int r = 0; r < integer; r++) {
        int temp = arr[0];
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
    }
}

int main() {
    int n, integer;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter the number of rotations: ");
    scanf("%d", &integer);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Original Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    rotate_left(arr, n, integer);

    printf("Array after %d left rotations:\n", integer);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


