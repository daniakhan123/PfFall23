// programmer Dania khan
// DATE 28/11/23
//DESCRIPTION checking if files a re equal or not



#include <stdio.h>
#include <stdlib.h>

int compareFiles(FILE *file1, FILE *file2);

int main() {
    // Create and write to the first file
    FILE *file1 = fopen("file1.docx", "wb");
    if (file1 == NULL) {
        perror("Error creating file1");
        return 1;
    }
    fprintf(file1, "This is a test.");
    fclose(file1);

    // Create and write to the second file
    FILE *file2 = fopen("file2.docx", "wb");
    if (file2 == NULL) {
        perror("Error creating file2");
        return 1;
    }
    fprintf(file2, "This is a test.");
    fclose(file2);

    // Compare the contents of the two files
    file1 = fopen("file1.docx", "rb");
    file2 = fopen("file2.docx", "rb");

    if (file1 == NULL || file2 == NULL) {
        perror("Error opening files for comparison");
        return 1;
    }

    int result = compareFiles(file1, file2);

    // Close the files
    fclose(file1);
    fclose(file2);

    // Display the result
    if (result == 0) {
        printf("The files are equal.\n");
    } else {
        printf("The files are not equal.\n");
    }

    return 0;
}

int compareFiles(FILE *file1, FILE *file2) {
    int ch1, ch2;

    while (1) {
        ch1 = fgetc(file1);
        ch2 = fgetc(file2);

        if (ch1 != ch2) {
            return 1; // Files are not equal
        }

        if (ch1 == EOF || ch2 == EOF) {
            break; // End of file
        }
    }

    return 0; // Files are equal
}
