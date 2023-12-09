/**
 * Programmer: Dania Khan
 * Desc: Student Data
 * Date: 24/11/2023
 * Roll-No: 23K-0072
 */ 
#include <stdio.h>
#include <string.h>

typedef struct Register
{
	int courseId;
	char courseName[15];
} Register;

typedef struct Student
{
	int studentId;
	char firstName[10];
	char lastName[10];
	int cellNo;
	char email[30];
	Register info;
}Student;

int main(){
	Student std[5];
	for (int i = 0; i < 5; ++i)
	{
		printf("Enter Student Id: ");
		scanf("%d", &std[i].studentId);
		printf("Enter First Name: ");
		getchar();
		gets(std[i].firstName);
		printf("Enter Last Name: ");
		getchar();
		gets(std[i].lastName);
		printf("Enter Cell No: ");
		scanf("%d", &std[i].cellNo);
		printf("Enter Email: ");
		getchar();
		gets(std[i].email);
		printf("Enter Course Id: ");
		scanf("%d", &std[i].info.courseId);
		printf("Enter Course Name: ");
		getchar();
		gets(std[i].info.courseName);
	}
	for (int i = 0; i < 5; ++i)
	{
		printf("Student %d\n", i+1);
		printf("Student Id: %d\nFirst Name: %s\nLast Name: %s\nCell No: %d\n"
			"Email: %s\nCourse Id: %d\nCourse Name: %s", std[i].studentId, std[i].firstName, std[i].lastName, std[i].cellNo, std[i].email, std[i].info.courseId, std[i].info.courseName);
	}
}
