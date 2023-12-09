/**
 * Programmer: Dania Khan
 * Desc: Course CGPA and SGPA
 * Date: 04/12/2023
 * Roll-No: 23K-0072
 */ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct course
{
    int courseCode;
    char courseName[15];
    int courseGpa;
    int semester;
    int creditHours;
} course;


int main(){
    int n, cSum = 0;
    printf("Enter the number of courses: ");
    scanf("%d", &n);

    FILE *ptr = fopen("courses.txt", "w");
    course *arr = (course *)malloc(n * sizeof(course));
    for (int i = 0; i < n; i++)
    {
            printf("Enter Course %d ID: ", i+1);
            scanf("%d", arr[i].courseCode);
            printf("Enter Course Name: ");
            scanf("%s", arr[i].courseName);
            printf("Enter Course GPA: ");
            scanf("%d", arr[i].courseGpa);
            printf("Enter Semester: ");
            scanf("%d", arr[i].semester);
            printf("Enter Credit Hours: ");
            scanf("%d", arr[i].creditHours);
            fprintf(ptr, "%s %s %s %s %s\n", arr[i].courseCode, arr[i].courseName, arr[i].courseGpa, arr[i].semester, arr[i].creditHours);
            fprintf(ptr, "\n");   
    }
    int a, b, totalCreditHours = 0;
    char temp[20];
    printf("Enter:\n1- View Transcript\n2- Calculate CGPA\n3- Calculate SGPAS\nEnter: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        for (int i = 0; i < n; i++)
        {
            printf("Course Id: %d", arr[i].courseCode);
            printf("Course Name: %s", arr[i].courseName);
            printf("Course GPA: %d: ", arr[i].courseGpa);
            printf("Semester: %d", arr[i].semester);
            printf("Credit Hours: %d\n", arr[i].creditHours);
        }
        break;
    case 2:
        printf("Enter The Course Whoose CGPA You Want: ");
        scanf("%s", temp);
        for (int i = 0; i < n; i++)
        {
            if (strcmp(arr[i].courseName, temp) == 0) {
                cSum += arr[i].courseGpa * arr[i].creditHours;
                totalCreditHours += arr[i].creditHours;
            }
        }
        printf("Course %s CGPA: %d\n", temp, cSum / totalCreditHours);
        break;
    case 3:
        printf("Enter The Semester\n");
        scanf("%d", &b);
        for (int i = 0; i < n; ++i)
        {
            if (arr[i].semester == b)
            {
                cSum += arr[i].courseGpa * arr[i].creditHours;
                totalCreditHours += arr[i].creditHours;
            }
        }
        printf("SGPA of Semester %d: %d\n", b, cSum / totalCreditHours);
        break;
    }
    
}
