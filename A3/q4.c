// programmer Dania Khan 
// date 7/12/23
// decsription : details of the workers having a maximum salary for each department and fetch the department along with the total salaries paid for each of them.



#include <stdio.h>
#include <string.h>

// Define Worker structure
typedef struct {
    int id;
    char first_name[20];
    char last_name[20];
    int salary;
    char join_date[20];
    char department[20];
} Worker;

// Function prototypes
int maxSalary(Worker worker[], char department[20]);
int totalSalary(Worker worker[], char department[20]);
void display(Worker worker[], int a);

// Array to store department names
char departs[][20] = {"HR", "Admin", "Account"};

int main() {
    // Initialize an array of Workers
    Worker worker[8] = {
        {1, "Monika", "Arora", 100000, "2014-02-20", "HR"},
        {2, "Niharika", "Verma", 80000, "2014-06-11", "Admin"},
        {3, "Vishal", "Singhal", 300000, "2014-02-20", "HR"},
        {4, "Amitabh", "Singh", 500000, "2014-02-20", "Admin"},
        {5, "Vivek", "Bhati", 500000, "2014-06-11", "Admin"},
        {6, "Vipul", "Diwan", 200000, "2014-06-11", "Account"},
        {7, "Satish", "Kumar", 75000, "2014-01-20", "Account"},
        {8, "Geetika", "Chauhan", 90000, "2014-04-11", "Admin"}
    };

    
    printf("Name: Dania khan\nId: 23K-0072\n");

    // showing worker of max salary and total salaries
    display(worker, 1);
    display(worker, 2);

    return 0;
}

// Function to find the index of the worker with the maximum salary
int maxSalary(Worker worker[], char department[20]) {
    int highest = 0, value = 0;
    for (int i = 0; i < 8; ++i) {
        
        if (strcmp(worker[i].department, department) == 0) {
            // Update highest salary and index if current salary is greater
            if (worker[i].salary > highest) {
                highest = worker[i].salary;
                value = i;
            }
        }
    }
    return value; 
}

// Function to calculate the total salary for a given department
int totalSalary(Worker worker[], char department[20]) {
    int total = 0;
    for (int i = 0; i < 8; ++i) {
        // Check if the worker belongs to the specified department
        if (strcmp(worker[i].department, department) == 0) {
            total += worker[i].salary;
        }
    }
    return total; 
}


void display(Worker worker[], int a) {
    if (a == 1) {
        // Display workers with maximum salary for each department
        printf("\nDetails of workers with maximum salary for each department:\n");
        printf("ID   First Name   Last Name   Salary   Join Date     Department\n");
        for (int i = 0; i < 3; ++i) {
        
            int id = maxSalary(worker, departs[i]);
            // Print information of the worker with the maximum salary in the department
            printf("%-4d %-12s %-12s %-8d %-12s %-s\n",
                   worker[id].id, worker[id].first_name, worker[id].last_name,
                   worker[id].salary, worker[id].join_date, worker[id].department);
        }
    }
    if (a == 2) {
        // Display total salaries for each department
        printf("\nDepartments along with total salaries paid for each:\n");
        printf("Department   Total Salary\n");
        for (int i = 0; i < 3; ++i) {
            // Print department name and total salary for the department
            printf("%-12s %-d\n", departs[i], totalSalary(worker, departs[i]));
        }
    }
}
