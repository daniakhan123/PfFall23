/**
 * Programmer: DANIA KHAN
 * Desc: Data from two file combined and stored in file
 * Date: 09/12/2023
 * Roll-No: 23K-0072
 */ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	FILE *personal = fopen("Personal.txt", "r");
	FILE *depart = fopen("Department.txt", "r");
	FILE *combine = fopen("Combine.txt", "a");

	char tempArray[30], Array[30], ID[5]; 
	printf("Enter Id: ");
	scanf("%s", &ID);
	fscanf(personal, "%s", &Array);
	while(!feof(personal) && (strcmp(ID, Array)) != 0){
		fscanf(personal, "%s", &Array);
		if (Array == NULL) {
			fgets(tempArray, 20, personal);
        }
	}
	fscanf(personal, "%s", &tempArray);
	strcat(Array, " ");
	strcat(Array, tempArray);
	fscanf(depart, "%s", &tempArray);
	while((strcmp(ID, tempArray)) != 0){
		fscanf(depart, "%s", &tempArray);
		if (tempArray == NULL) {
			fgets(tempArray, 20, depart);
        }
	}
	fscanf(depart, "%s", &tempArray);
	strcat(Array, " ");
	strcat(Array, tempArray);
	fprintf(combine, "Name: Dania Khan\nRoll-No: 23k-0072\n");
	fputs(Array, combine);
	fprintf(combine, "\n");
}
