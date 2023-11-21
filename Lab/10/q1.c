// programmer Dania khan
// date 17/11/23
// desc 


#include <stdio.h>
#include <stdlib.h>

// Declare the function prototype for malloc
void* my_malloc(size_t size);

int main() {
    int n, i;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    int *arr = (int*)my_malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Entered values are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}

// Define the my_malloc function
void* my_malloc(size_t size) {
    int *ptr = (int*)malloc(size);
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    return ptr;
}
