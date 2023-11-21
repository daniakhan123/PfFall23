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
    int n, pyear,rn;
    printf("Enter the number of students who joined the event: ");
    scanf("%d", &n);

    struct Student studentdata[n];
    int i;

    for (i = 0; i < n; ++i) {
        printf("\nEnter Data of Student %d:\n", i + 1);

        while (getchar() != '\n');

        printf("Name: ");
        fgets(studentdata[i].Name, sizeof(studentdata[i].Name), stdin);

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

    // Get the specific year to print
    printf("Enter the specific year: ");
    scanf("%d", &pyear);

    // Print names of students who joined in a particular year
    printf("\nStudent names who joined in the year %d:\n", pyear);
    for (i = 0; i < n; ++i) {
        if ((int)studentdata[i].year == pyear) {
            printf("Name: %s\n", studentdata[i].Name);
        }
    }
    printf("specific year : ");
    scanf("%d",&rn);
          printf("\nStudent data of roll number %d:\n", rn);
        for (i = 0; i < n; ++i) {
        if ((int)studentdata[i].Rollnum == rn) {
            printf("Name: %s\n", studentdata[i].Name);
            printf("Department: %s\n", studentdata[i].Depart);
            printf("Course: %s\n", studentdata[i].Course);
            printf("Year of Joining: %2f\n", studentdata[i].year);
        }
    }

    return 0;
}
