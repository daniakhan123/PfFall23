// Programmer Dania Khan
//Description Flight system in @d array

#include <stdio.h>

int main() {
    // initializinfg a 2D array
    int arr[5][4] = {
        {1, 300, 0, 0},
        {1, 320, 1, 310},
        {0, 0, 1, 280},
        {1, 380, 0, 0},
        {1, 375, 1, 400}};

    int user_choice;
    // taking input from the user to choose between Morning, Evening, or a specific day
    printf("Input 1 for Morning slot, 2 for Evening slot, or 3 for a specific day preference: ");
    scanf("%d", &user_choice);

    int i, j=1;
    int min = arr[0][1];
    if (user_choice == 1) {
        // Check for morning flight 
        for (i=0; i<5; i++) {
            if (arr[i][0] == 1) {
                printf("Flight is available on Day %d in the morning slot\n", i + 1);
                if (arr[i][1] < min) {
                    min = arr[i][1];
                    j = i + 1;
                }
            }
        }
        printf("The best choice to book the flight is on Day %d with the lowest price of %d\n", j, min);
    }
    else if (user_choice == 2) {
        // Check for evening flight 
        int j = 1;
        int min = arr[0][3];
        for (i=0; i<5; i++) {
            if (arr[i][2] == 1) {
                printf("Flight is available on Day %d in the evening slot\n", i + 1);
                if (arr[i][3] < min) {
                    min = arr[i][3];
                    j = i + 1;
                }
            }
        }
        printf("The best choice to book the flight is on Day %d with the lowest price of %d\n", j, min);
    }
    else if (user_choice == 3) {
        int week_day;

        // taking input from the user to choose a specific day
        printf("Enter 1 for Monday, 2 for Tuesday, 3 for Wednesday, 4 for Thursday, or 5 for Friday: ");
        scanf("%d", &week_day);

        for (i=0; i<5; i++) {
            if (week_day == i + 1) {
                // Check for flight availability of each day and their price
                if (arr[i][0] == 1 && arr[i][2] == 1) {
                    printf("Flight is available on Day %d in the morning and evening slots\n", i + 1);
                    printf("The morning flight costs %d, and the evening flight costs %d\n", arr[i][1], arr[i][3]);
                } else if (arr[i][0] == 1 && arr[i][2] == 0) {
                    printf("Flight is available on Day %d in the morning only\n", i + 1);
                    printf("The morning flight costs %d\n", arr[i][1]);
                } else if (arr[i][0] == 0 && arr[i][2] == 1) {
                    printf("Flight is available on Day %d in the evening only\n", i + 1);
                    printf("The evening flight costs %d\n", arr[i][3]);
                } else {
                    printf("No flights available on Day %d\n", i + 1);
                }
            }
        }
    } else {
        //checking if invalid input
        printf("Invalid choice. Please select 1, 2, or 3.\n");
    }

    return 0;
}//end main
