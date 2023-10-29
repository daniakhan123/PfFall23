//programer : Dania Khan
Description : sorting Subarray in an array


#include <stdio.h>

int main() {
    int N, S;

    printf("Enter Number S: ");
    scanf("%d", &S);
    
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int A[100];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int start = 0;  // Starting index of the subarray
    int end = 0;    // Ending index of the subarray
    int currentSum = A[0]; // Current sum of the subarray

    while (end < N) {
        if (currentSum == S) {
            printf("The elements from Index %d to %d when summed result in the output of %d.\n", start, end, S);
            break;
        }

        if (currentSum < S) {
            end++;
            if (end < N) {
                currentSum += A[end];
            }
        } else {
            currentSum -= A[start];
            start++;
        }
    }

    if (start == N) {
        printf("No subarray found with a sum of %d.\n", S);
    }

    return 0;
}
