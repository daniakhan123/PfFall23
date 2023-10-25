//Programmer Dania Khan
//Date:26-10-2023
//Description : Discount in a coffee shop

#include <stdio.h>

float calculateDiscount(float totalPurchase, int visits) {
    float disc = 0;

    if (visits > 10 && totalPurchase >= 50) {
        disc = totalPurchase * 0.15;
    } else if (visits > 5 && totalPurchase >= 30) {
        disc= totalPurchase * 0.10;
    }

    return disc;
}

int main() {
    float totalPurchase;
    int visits;

    printf("Enter the total purchase amount: $");
    scanf("%f", &totalPurchase);

    printf("Enter the number of times you've visited the shop: ");
    scanf("%d", &visits);

    float disc = calculateDiscount(totalPurchase, visits);

     if( disc > 0) {
     	disc =disc / totalPurchase * 100;
     	
        printf("You discount is %f ",  disc);
    } else {
        printf("No discount is applied.\n");
    }

    return 0;
}
