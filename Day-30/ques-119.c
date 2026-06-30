#include <stdio.h>
#include <string.h>
int main()
{
    // Arrays to store employee details
    int empId[100];
    char empName[100][50];          //array of string to store employee name
    char department[100][30];       //array of string to store employee department
    float salary[100];
    int n=0;          // Number of employees
    int choice, i, id, found;
    // Infinite loop for menu
    while (1)
    {
        printf("\n========== EMPLOYEE MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");

        printf("Enter Your Choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:        // Add a new employee
            printf("\nEnter Employee ID : ");
            scanf("%d",&empId[n]);
            printf("Enter Employee Name : ");
            scanf(" %[^\n]",empName[n]);
            printf("Enter Department : ");
            scanf(" %[^\n]",department[n]);
            printf("Enter Salary : ");
            scanf("%f",&salary[n]);
            n++;          // Increase employee count
            printf("\nEmployee Added Successfully!\n");
            break;
        case 2:       // Display all employees
            if(n==0)
            {
                printf("\nNo Employee Records Found!\n");
            }
            else
            {
                printf("\n========== EMPLOYEE LIST ==========\n");
                for(i=0;i<n;i++)
                {
                    printf("\nEmployee %d\n",i+1);
                    printf("Employee ID   : %d\n",empId[i]);
                    printf("Name          : %s\n",empName[i]);
                    printf("Department    : %s\n",department[i]);
                    printf("Salary        : %.2f\n",salary[i]);
                }
            }
            break;
        case 3:      // Search employee by ID
            printf("\nEnter Employee ID to Search : ");
            scanf("%d",&id);
            found=0;
            for(i=0;i<n;i++)
            {
                if(empId[i]==id)
                {
                    printf("\nEmployee Found!\n");
                    printf("Employee ID : %d\n", empId[i]);
                    printf("Name        : %s\n", empName[i]);
                    printf("Department  : %s\n", department[i]);
                    printf("Salary      : %.2f\n", salary[i]);
                    found=1;
                    break;
                }
            }
            if(found==0)
                printf("\nEmployee Not Found!\n");
            break;
        case 4:       // Update employee salary
            printf("\nEnter Employee ID : ");
            scanf("%d",&id);
            found=0;
            for(i=0;i<n;i++)
            {
                if(empId[i]==id)
                {
                    printf("Enter New Salary : ");
                    scanf("%f",&salary[i]);
                    printf("\nSalary Updated Successfully!\n");
                    found=1;
                    break;
                }
            }
            if(found==0)
                printf("\nEmployee Not Found!\n");
            break;
        case 5:       // Delete employee record
            printf("\nEnter Employee ID to Delete : ");
            scanf("%d",&id);
            found=0;
            for(i= 0;i<n;i++)
            {
                if(empId[i]==id)
                {
                    int j;
                    // Shift all records one position left
                    for(j=i;j<n-1;j++)
                    {
                        empId[j]=empId[j+1];
                        strcpy(empName[j],empName[j+1]);
                        strcpy(department[j],department[j+1]);
                        salary[j]=salary[j+1];
                    }
                    n--;   // Decrease employee count
                    printf("\nEmployee Deleted Successfully!\n");
                    found=1;
                    break;
                }
            }
            if(found==0)
                printf("\nEmployee Not Found!\n");
            break;
        case 6:       // Exit the program
            printf("\nThank You!\n");
            return 0;
        default:     // Invalid choice
            printf("\nInvalid Choice! Please Try Again.\n");
        }
    }
    return 0;
}