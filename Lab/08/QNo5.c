//programmer dania khan
// decsription function for car usage in a week

#include <stdio.h>
#include <stdbool.h>

int decidecarusage(int n, int week) {
    if (n % 2 == 0 && week % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n, week;

    printf("Enter the number of cars: ");
    scanf("%d", &n);
    printf("Enter the day in the week: ");
    scanf("%d", &week);

    int carInUse = decidecarusage(n, week);

    printf("%d\n",carInUse);

    return 0;
}
