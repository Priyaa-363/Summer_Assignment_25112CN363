#include <stdio.h>
struct Employee           //define structure to store employees's salary in defferent data types
{
    int id;
    char name[50];
    float basic, hra, da, total;
};
int main()
{
    struct Employee emp[100];       //declare the variable of structure of size 100
    int n = 0, choice, i, id, found;
    while(1)           //infinite loop until return not found
    {
        printf("\n======= Salary Management System =======\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display All Salaries\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter Choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:          //add employee salary
            printf("Enter Employee ID : ");
            scanf("%d",&emp[n].id);
            printf("Enter Employee Name : ");
            scanf("%s",emp[n].name);
            printf("Enter Basic Salary  : ");
            scanf("%f",&emp[n].basic);
            emp[n].hra=emp[n].basic*0.20;       //house rent allowance
            emp[n].da=emp[n].basic*0.10;        //dearness allowance
            emp[n].total=emp[n].basic+emp[n].hra+emp[n].da;      //total or gross salary
            n++;
            printf("Salary Record Added Successfully!\n");
            break;
        case 2:          //display all salaries
            if(n==0)
            {
                printf("No Records Found!\n");
            }
            else
            {
                printf("\nEmployee Salary Details :\n");
                for(i=0;i<n;i++)
                {
                    printf("\nID           : %d",emp[i].id);
                    printf("\nName         : %s",emp[i].name);
                    printf("\nBasic Salary : %.2f",emp[i].basic);
                    printf("\nHRA          : %.2f",emp[i].hra);
                    printf("\nDA           : %.2f",emp[i].da);
                    printf("\nTotal Salary : %.2f\n",emp[i].total);
                }
            }
            break;
        case 3:         //search employee
            printf("Enter Employee ID to Search : ");
            scanf("%d",&id);
            found=0;
            for(i=0;i<n;i++)
            {
                if(emp[i].id==id)
                {
                    printf("\nID           : %d",emp[i].id);
                    printf("\nName         : %s",emp[i].name);
                    printf("\nBasic Salary : %.2f",emp[i].basic);
                    printf("\nHRA          : %.2f",emp[i].hra);
                    printf("\nDA           : %.2f",emp[i].da);
                    printf("\nTotal Salary : %.2f\n",emp[i].total);
                    found=1;
                    break;
                }
            }
            if(found==0)
                printf("Employee Not Found!\n");
            break;
        case 4:          //update the salary
            printf("Enter Employee ID to Update : ");
            scanf("%d",&id);
            found=0;
            for(i=0;i<n;i++)
            {
                if(emp[i].id==id)
                {
                    printf("Enter New Basic Salary : ");
                    scanf("%f",&emp[i].basic);
                    emp[i].hra=emp[i].basic*0.20;
                    emp[i].da=emp[i].basic*0.10;
                    emp[i].total=emp[i].basic+emp[i].hra+emp[i].da;
                    printf("Salary Updated Successfully!\n");
                    found=1;
                    break;
                }
            }
            if(found==0)
                printf("Employee Not Found!\n");
            break;
        case 5:        //delete the employee
            printf("Enter Employee ID to Delete : ");
            scanf("%d",&id);
            found=0;
            for(i=0;i<n;i++)
            {
                if(emp[i].id==id)
                {
                    int j;
                    for(j=i;j<n-1;j++)
                    {
                        emp[j]=emp[j+1];
                    }
                    n--;
                    found=1;
                    printf("Record Deleted Successfully!\n");
                    break;
                }
            }
            if(found==0)
                printf("Employee Not Found!\n");
            break;
        case 6:          //exiting the loop
            printf("Exiting Program...\n");
            return 0;
        default:
            printf("Invalid Choice!\n");
        }
    }
    return 0;
}