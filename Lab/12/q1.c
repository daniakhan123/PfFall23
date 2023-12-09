//programmer : dania khan
// desc: reading csv file and and printing number of rows and columns in it also giving the tabular output.


#include<stdio.h>
#include<stdlib.h>

int main() {
    int c;
    int countc = 0;
    int i,j;
    int countr = 1;
    FILE *fp = NULL;

    fp = fopen("tab.csv", "r");

    if (fp == NULL) {
        printf("File not found.\n");
        exit(1);
    }

    while ((c = fgetc(fp)) != EOF) {
        if (c == '\n') {
            countr++;
        }
    }

    fseek(fp, 0, SEEK_SET);

    // Read the first line (header) and discard it
    while ((c = fgetc(fp)) != '\n' && c != EOF) {
        // Discard the header line
    }

    // Read the second line (data) to count columns
    while ((c = fgetc(fp)) != '\n' && c != EOF) {
        if (c == ',') {
            countc++;
        }
    }

    // Add 1 to count the last column
    countc++;

    printf("Number of rows: %d\n", countr);
    printf("Number of columns: %d\n", countc);

        fseek(fp, 0, SEEK_SET);

        for(i=0;i<countr;i++){
            for(j=0;j<countc;j++){
                fscanf(fp,"%d, ",&c);
                printf("| %d\t",c);
            }
            printf("\n");
        }



    fclose(fp);

    return 0;
}

