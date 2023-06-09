#include <stdio.h>
#include <stdlib.h>

#define MAX_EMPLOYEES 100

struct Employee {
    char name[50];
    int employeeID;
    float salary;
    char jobTitle[50];
};

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int numEmployees = 0;

    int choice;
    do {
        printf("\n\tEMPLOYEE MANAGEMENT SYSTEM\n");
        printf("\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (numEmployees >= MAX_EMPLOYEES) {
                    printf("Maximum number of employees reached!\n");
                    break;
                }

                printf("\nAdd Employee\n");
                printf("Employee Name: ");
                scanf("%s", employees[numEmployees].name);
                printf("Employee ID: ");
                scanf("%d", &employees[numEmployees].employeeID);
                printf("Salary: ");
                scanf("%f", &employees[numEmployees].salary);
                printf("Job Title: ");
                scanf("%s", employees[numEmployees].jobTitle);

                numEmployees++;
                break;

            case 2:
                printf("\n\tEmployee Details:-\n");
                if (numEmployees == 0) {
                    printf("No employees found!\n");
                    break;
                }

                for (int i = 0; i < numEmployees; i++) {
                    printf("Employee %d\n", i + 1);
                    printf("Name: %s\n", employees[i].name);
                    printf("Employee ID: %d\n", employees[i].employeeID);
                    printf("Salary: %.2f\n", employees[i].salary);
                    printf("Job Title: %s\n\n", employees[i].jobTitle);
                }
                break;

            case 3:
                printf("Exiting the program...\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}

