// programmer : Dania khan
// date:21/11/23
// Description : taking info of students by using structure


#include <stdio.h>

// Define the student struct
struct Student {
    char Name[450];
    float Rollnum;
    char Depart[100];
    char Course[100];
    float year;
};

int main() {
    int n;
    printf("Enter the number of students who joined the event: ");
    scanf("%d", &n);
    struct Student studentdata[n];
    int i;

    for ( i = 0; i < n; ++i) {
        printf("Enter Data of Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", studentdata[i].Name);
        printf("Roll Number: ");
        scanf("%f", &studentdata[i].Rollnum);
        while (getchar() != '\n');
        printf("Department: ");
        fgets(studentdata[i].Depart, sizeof(studentdata[i].Depart), stdin);
        printf("Course: ");
        fgets(studentdata[i].Course, sizeof(studentdata[i].Course), stdin);
        printf("Year: ");
        scanf("%f", &studentdata[i].year);
    
    }
    printf("\nEntered Students data:\n");
    for (int j = 0; j < n; ++j) {
        printf("\nStudent %d:\n", j + 1);
        printf("Name: %s\n", studentdata[j].Name);
        printf("Roll Number: %2f\n", studentdata[j].Rollnum);
        printf("Department: %s", studentdata[j].Depart);
        printf("Course: %s", studentdata[j].Course);
        printf("Year: %2f\n", studentdata[j].year);
    }

    return 0;
}
