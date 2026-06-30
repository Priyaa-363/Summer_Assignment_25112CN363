#include <stdio.h>
int main()
{
    // Arrays to store student details
    int roll[100];
    float marks[100];
    char name[100][50];         //string to store student's name
    int n=0;       // Number of students
    int choice;
    int i, search;
    int found;
    // Infinite menu loop
    while (1)
    {
        printf("\n========= STUDENT RECORD SYSTEM =========\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:      // Add new student
            printf("Enter Roll Number : ");
            scanf("%d",&roll[n]);
            printf("Enter Name : ");
            scanf(" %[^\n]",name[n]);   // Read full name including space
            printf("Enter Marks : ");
            scanf("%f",&marks[n]);
            n++;       // Increase student count
            printf("Student Added Successfully!\n");
            break;
        case 2:       // Display all students
            if(n==0)
            {
                printf("No Student Records Found!\n");
            }
            else
            {
                printf("\n-----Student Records-----\n");

                for(i=0;i<n;i++)
                {
                    printf("\nStudent %d\n",i+1);
                    printf("Roll Number : %d\n",roll[i]);
                    printf("Name        : %s\n",name[i]);
                    printf("Marks       : %.2f\n",marks[i]);
                }
            }
            break;
        case 3:       // Search student by roll number
            printf("Enter Roll Number to Search : ");
            scanf("%d",&search);
            found=0;
            for(i=0;i<n;i++)
            {
                if(roll[i]==search)
                {
                    printf("\n-----Student Found-----\n");
                    printf("Roll Number : %d\n",roll[i]);
                    printf("Name        : %s\n",name[i]);
                    printf("Marks       : %.2f\n",marks[i]);
                    found=1;
                    break;
                }
            }
            if(found==0)
            {
                printf("Student Not Found!\n");
            }
            break;
        case 4:      //update student
            printf("Enter Roll Number to Update : ");
            scanf("%d",&search);
            found=0;
            for(i=0;i<n;i++)
            {
                if(roll[i]==search)
                {
                    printf("Enter New Name of Student : ");
                    scanf(" %[^\n],name[i][50]");
                    printf("Enter New Marks of Student : ");
                    scanf("%f",&marks[i]);
                    printf("Updation of student Successful!\n");
                    found=1;
                }
            }
            if(found==0)
                printf("Student not Found!\n");
            break;
        case 5:         //exit
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }
    return 0;
}