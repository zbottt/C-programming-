#include <stdio.h>

// Define a structure to hold employee details
struct employee {
    int id;
    char name[50];
    float salary;
};

void add_employee() {
    struct employee emp;
    FILE *file = fopen("employee_database.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Name: ");
    getchar();
    gets(emp.name);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    // Write employee data to the file
    fprintf(file, "%d %.2f %s\n", emp.id, emp.salary, emp.name);
    fclose(file);
    printf("Employee record added successfully!\n");
}
void display_employees() {
    struct employee emp;

    FILE *file = fopen("employee_database.txt", "r");

    if (file == NULL) {
        printf("No employee records found!\n");
        return;
    }

    printf("\nEmployee Records:\n");
    printf("ID\tName\t\tSalary\n");
    printf("------------------------------------\n");

    // Read and display each employee record from the file
    while (fscanf(file, "%d %f %[^\n]", &emp.id, &emp.salary, emp.name) != EOF) {
        printf("%d\t%-15s\t%.2f\n", emp.id, emp.name, emp.salary);
    }

    fclose(file);
}
int main(){
    int choice;

    printf("\t\t * Employee Database * \n\n");

    while (1) {
        // Menu for user
        printf("\nEmployee Database Menu:\n");
        printf("1. Add Employee Record\n");
        printf("2. Display Employee Records\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_employee();
                break;
            case 2:
                display_employees();
                break;
            case 3:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
