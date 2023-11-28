//programmer:Dania Khan
//date:21/11/23
//desc:2d arrays 2 ways one make several malloc calls one makes only 2 malloc calls 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void printArray(int **array, int rows, int cols) ;
void func(int **ptr1, int rows, int cols);

int main() {
    int *ptr;
    int rows, cols;
    
    printf("Enter number of rows and columns: \n");
    scanf("%d%d", &rows, &cols);

    int **ptr1;
    ptr1 = (int**)malloc(rows * sizeof(int*));

    ptr = (int*)malloc(rows * cols * sizeof(int));

    printf("Input for array: ");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
           * (ptr + i * cols + j)=i+j+1;
        }
    }

    for (int i = 0; i < rows; i++) {
        *(ptr1 + i) = (ptr + i * cols);
    }

    int **ptr2;
    ptr2 = (int**)malloc(rows * sizeof(int*));

    for (int i = 0; i < rows; i++) {
        *(ptr2 + i) = (int*)malloc(cols * sizeof(int));
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(*(ptr2 + i) + j) = *(ptr + i * cols + j);
        }
    }

     clock_t t=0,t1=0; 
    t = clock(); 
    func(ptr1,rows, cols);
    t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
    t1=clock();
    func(ptr2, rows, cols);
    t1 =clock() -t1;
    double time_taken2 = ((double)t1)/CLOCKS_PER_SEC; // in seconds 
    printf("array of size [%d][%d] \nfunction takes %f seconds for 2Darray using only 2 malloc calls and\n %f seconds for 2Darray using several malloc calls",rows,cols,time_taken,time_taken2);
    free(ptr);
    free(ptr1);
    for (int i = 0; i < rows; i++) {
        free(ptr2[i]);
    }
    free(ptr2);

    return 0;
}
void printArray(int **array, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(*(array + i) + j));
        }
        printf("\n");
    }
}
void func(int **ptr1, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
           // *(*(ptr2 + i) + j) = *(*(ptr2 + i) + j) * 3 / 2;
            *(*(ptr1 + i) + j) = *(*(ptr1 + i) + j) * 3 / 2;
        }
    }
}

       

    return 0;
}
