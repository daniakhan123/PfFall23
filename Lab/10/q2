//programmer dania khan
// date 21/11/23
// description : structure for information of engine parts

#include <stdio.h>
#include <string.h>

//struct for engine part
struct EnginePart {
    char serialNumber[4];
    int year;
    char material[100];
    int quantity;
};

int main() {
    int nparts; // Number of parts
    struct EnginePart parts[100];

    // Prompt user to input the number of parts
    printf("Enter the number of parts: ");
    scanf("%d", &nparts);

    // Input data for each engine part
    for (int i = 0; i < nparts; ++i) {
        printf("\nEnter information for Engine Part %d:\n", i + 1);

        //taking input for serial number
        printf("Serial Number : ");
        scanf("%s", parts[i].serialNumber);

        //taking input for year of manufacture
        printf("Year of Manufacture: ");
        scanf("%d", &parts[i].year);

        //taking input for Material
        printf("Material: ");
        scanf("%s", parts[i].material);

        //taking input for Quantity
        printf("Quantity Manufactured: ");
        scanf("%d", &parts[i].quantity);
    }

    printf("\nParts with serial numbers between BB1 and CC6:\n");
    for (int i = 0; i < nparts; ++i) {
        if (strcmp(parts[i].serialNumber, "BB1") >= 0 && strcmp(parts[i].serialNumber, "CC6") <= 0) {
            printf("Serial Number: %s\n", parts[i].serialNumber);
            printf("Year of Manufacture: %d\n", parts[i].year);
            printf("Material: %s\n", parts[i].material);
            printf("Quantity Manufactured: %d\n", parts[i].quantity);
            printf("\n");
        }
    }

    return 0;
}
