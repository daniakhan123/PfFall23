///Programmer: Dania Khan
///Date: 10-oct-2023
/// Description : rotation of array

#include <stdio.h>

int main() {
    int N, d;
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate left by: ");
    scanf("%d", &d);

    
    d %= N;  
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[(i + d) % N]);
    }

    return 0;
}


