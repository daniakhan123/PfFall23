//PRogrammer Dania Khan
//description : Finding presistence number


#include <stdio.h>
#include <stdbool.h>

int main() {
    int input, remainder, quotient;
    int persistence = 0;
    char userInput[5];

    while (1) {
        printf("Enter a number (type 'EOF' to stop): ");
        scanf("%d", &input);

        if (input >= 10) {
            while (input >= 10) {
                int product = 1;

                while (input >= 10) {
                    remainder = input % 10;
                    quotient = input / 10;
                    product *= remainder;
                    input = quotient;
                }

                product *= input;
                input = product;
                printf("Number after finding the digit multiple: %d\n", input);
                persistence++;
            }
        }

        printf("The final integer resulting from digit multiplications: %d\n", input);
        printf("Persistence: %d\n", persistence);
        printf("Type 'EOF' to stop: ");
        getchar();
        gets(userInput);

        if (strcmp(userInput, "EOF") == 0) {
            break;
        }
    }

    return 0;
}
