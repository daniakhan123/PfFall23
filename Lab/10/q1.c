//programmer dania khan 
//date 17/11/23
// desc : creating a universal array using the DMA


#include <stdio.h>
#include <stdlib.h>

void *calloc(size_t, size_t);
void printArray(void *, size_t, char);

int main() {
    int *p1;
    char *p2;
    float *p3;
    int n;
    float N;
    int b;

    printf("\nEnter (1) for int array\nEnter (2) for char array\nEnter (3) for float array\n");
    scanf("%d", &b);

    if (b == 1) {
        printf("\nEnter number of blocks for int array: ");
        scanf("%d", &n);

        p1 = (int *)calloc(n, sizeof(int));

        printf("\nEnter values:\n");
        for (int i = 0; i < n; i++) {
            printf("Enter value at index %d: ", i);
            scanf("%d", (p1 + i));
        }

        printArray(p1, n, 'd');

        free(p1);
    } else if (b == 2) {
        char string[30];
        printf("\nEnter a string: ");
        scanf("%s", string);

        p2 = (char *)calloc(strlen(string) + 1, sizeof(char));
        strcpy(p2, string);

        printArray(p2, strlen(string) + 1, 's');

        free(p2);
    } else if (b == 3) {
        printf("\nEnter number of blocks for float array: ");
        scanf("%f", &N);

        p3 = (float *)calloc((size_t)N, sizeof(float));

        printf("\nEnter values:\n");
        for (int i = 0; i < N; i++) {
            printf("Enter value at index %d: ", i);
            scanf("%f", (p3 + i));
        }

        printArray(p3, (size_t)N, 'f');

        free(p3);
    }

    return 0;
}

void printArray(void *arr, size_t size, char type) {
    printf("\nEntered values: ");
    if (type == 'd') {
        int *intArr = (int *)arr;
        for (size_t i = 0; i < size; i++) {
            printf("%d ", *(intArr + i));
        }
    } else if (type == 's') {
        char *charArr = (char *)arr;
        printf("%s", charArr);
    } else if (type == 'f') {
        float *floatArr = (float *)arr;
        for (size_t i = 0; i < size; i++) {
            printf("%f ", *(floatArr + i));
        }
    }
    printf("\n");
}
