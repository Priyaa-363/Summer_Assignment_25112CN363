#include <stdio.h>
#include <string.h>
struct Student              //define structure to store student's record at different data types
{
    int roll;
    char name[50];
    float marks;
};
int main()
{
    struct Student s[100];         //declare with a variable of size 100  
    int n=0, choice, i, roll, found;
    while(1)
    {
        //student record system
        printf("\n======= Student Record Management System =======\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:         //add student
            printf("Enter Roll Number : ");
            scanf("%d",&s[n].roll);
            printf("Enter Name  : ");
            scanf("%s",s[n].name);
            printf("Enter Marks : ");
            scanf("%f",&s[n].marks);
            n++;
            printf("Student Added Successfully!\n");
            break;
        case 2:            //display student
            if(n==0)
            {
                printf("No Records Found!\n");
            }
            else
            {
                printf("\nStudents Records : \n");
                for(i=0;i<n;i++)
                {
                    printf("\nRoll : %d", s[i].roll);
                    printf("\nName : %s", s[i].name);
                    printf("\nMarks : %.2f\n", s[i].marks);
                }
            }
            break;
        case 3:              //search student
            printf("Enter Roll Number to Search : ");
            scanf("%d",&roll);
            found=0;
            for(i=0;i<n;i++)
            {
                if(s[i].roll==roll)
                {
                    printf("\nRecord Found\n");
                    printf("Roll : %d\n", s[i].roll);
                    printf("Name : %s\n", s[i].name);
                    printf("Marks : %.2f\n", s[i].marks);
                    found=1;
                    break;
                }
            }
            if(found==0)
                printf("Record Not Found!\n");
            break;
        case 4:                 //update the record of student 
            printf("Enter Roll Number to Update : ");
            scanf("%d",&roll);
            found=0;
            for(i= 0;i<n;i++)
            {
                if(s[i].roll==roll)
                {
                    printf("Enter New Name : ");
                    scanf(" %s",s[i].name);
                    printf("Enter New Marks : ");
                    scanf("%f",&s[i].marks);
                    printf("Record Updated Successfully!\n");
                    found=1;
                    break;
                }
            }
            if(found==0)
                printf("Record Not Found!\n");
            break;
        case 5:                   //delete the record of student
            printf("Enter Roll Number to Delete : ");
            scanf("%d",&roll);
            found=0;
            for(i=0;i<n;i++)
            {
                if(s[i].roll==roll)
                {
                    int j;
                    for(j=i;j<n-1;j++)
                    {
                        s[j]=s[j+1];
                    }
                    n--;
                    found=1;
                    printf("Record Deleted Successfully!\n");
                    break;
                }
            }
            if(found==0)
                printf("Record Not Found!\n");
            break;
        case 6:           //to stop the program
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid Choice!\n");
        }
    }
    return 0;
}