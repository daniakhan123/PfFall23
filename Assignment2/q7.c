//Programmer Dania KHan
//DEscription sorting shirts in ascending order based on their size and price



#include <stdio.h>

int main() {
    int age, size = 10, price;

    // Initialize a 2D array to store shirt data: age and price
    int shirts[10][2] = {
        {0, 200},
        {0, 500},
        {0, 700},
        {0, 100},
        {0, 200},
        {0, 700},
        {0, 500},
        {0, 200},
        {0, 100},
        {0, 700}};

    // Input age for each shirt
    for (int i=0; i<10; i++) {
        printf("Enter age for shirt %d: ", i + 1);
        scanf("%d", &shirts[i][0]);
    }

    printf("Age\tPrice:\n");
    for (int i=0; i<10; i++) {
        for (int j=0; j<2; j++) {
            printf("[%d]\t", shirts[i][j]);
        }
        printf("\n");
    }

    // shirts based on age in ascending order
    int temp_age, temp_price;
    for (int i=0; i<10; i++) {
        for (int j=i + 1; j< 0; j++) {
            if (shirts[i][0] > shirts[j][0]) {
                // Swap age and price values
                temp_age = shirts[i][0];
                temp_price = shirts[i][1];
                shirts[i][0] = shirts[j][0];
                shirts[i][1] = shirts[j][1];
                shirts[j][0] = temp_age;
                shirts[j][1] = temp_price;
            }
        }
    }

    // shirts in ascending order based on age
    printf("Shirts in ascending order based on age\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 2; j++) {
            printf("[%d]\t", shirts[i][j]);
        }
        printf("\n");
    }

    // shirts based on price in descending order
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (shirts[i][1] < shirts[j][1]) {
                // Swap age and price values
                temp_age = shirts[i][0];
                temp_price = shirts[i][1];
                shirts[i][0] = shirts[j][0];
                shirts[i][1] = shirts[j][1];
                shirts[j][0] = temp_age;
                shirts[j][1] = temp_price;
            }
        }
    }

    // shirts in descending order based on price
    printf("Shirts in descending order based on price\n");
    for (int i=0; i<10; i++) {
        for (int j=0; j<2; j++) {
            printf("[%d]\t", shirts[i][j]);
        }
        printf("\n");
    }

    return 0;
}
