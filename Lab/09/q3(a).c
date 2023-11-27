
#include<stdio.h>

int main() {
    int N, i;

    printf("Enter size of an array: ");
    scanf("%d", &N);

    int arr[N];
    char arr2[N];
    long long int arr3[N];

    for (i = 0; i < N; i++) {
        printf("\nEnter elements of an int array: ");
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < N; i++) {

        getchar();

        printf("\nEnter elements of a char array: ");
        scanf("%c", &arr2[i]);
    }

    for (i = 0; i < N; i++) {
        printf("\nEnter elements of a long long int array: ");
        scanf("%lld", &arr3[i]);
    }

    for (i = 0; i < N; i++) {
        printf("\nElements of an int array: %d", arr[i]);
    }

    for (i = 0; i < N; i++) {
        printf("\nElements of a char array: %c", arr2[i]);
    }

    for (i = 0; i < N; i++) {
        printf("\nElements of a long long int array: %lld", arr3[i]);
    }

    return 0;
}
