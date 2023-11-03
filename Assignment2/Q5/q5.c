// Programmer Dania Khan
//Date 28-10-23
// Description : printing Ramanujan Series

#include <stdio.h>
#include <math.h>
int main() {
    // Get the maximum number for Ramanujan numbers
    int maxNumber;
    printf("Enter the upper limit to find Ramanujan numbers: ");
    scanf("%d", &maxNumber);

    printf("Ramanujan numbers up to %d are:\n", maxNumber);

    maxNumber = maxNumber * maxNumber * maxNumber;

    // Loop through potential Ramanujan numbers
    for (int a = 1; a < maxNumber; a++) {
        for (int b = a; b < maxNumber; b++) {
            for (int c = a; c < maxNumber; c++) {
                for (int d = c; d < maxNumber; d++) {
                    int ramanujan = (a * a * a) + (b * b * b);

                    // Check for distinct numbers and matching sum of cubes
                    if ((b != a) && (c != d) && (c != a) && (d != b) && (ramanujan > maxNumber)) {
                        if (((c * c * c) + (d * d * d)) == ramanujan) {
                            printf("%d  ", ramanujan);
                        }
                    }
                }
            }
        }
    }

    return 0;
}
