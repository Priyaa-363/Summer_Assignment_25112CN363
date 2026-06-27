#include <stdio.h>
struct Student            //define structure for storing marksheet details in different data types
{
    int roll;
    char name[50];
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    char grade;
};
int main()
{
    struct Student s[100];       //declare variable of structure of size 100
    int n=0, choice, i, roll, found;     
    while(1)       //infinite loop until return not found
    { 
        printf("\n======= Marksheet Generation System =======\n");
        printf("1. Add Student\n");
        printf("2. Display Marksheet\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Delete Record\n");
        printf("6. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:       //add student
            printf("Enter Roll Number : ");
            scanf("%d",&s[n].roll);
            printf("Enter Name : ");
            scanf("%s",s[n].name);
            printf("Enter Marks of 5 Subjects : ");
            scanf("%d%d%d%d%d", &s[n].m1, &s[n].m2, &s[n].m3,
                                 &s[n].m4, &s[n].m5);
            s[n].total = s[n].m1 + s[n].m2 + s[n].m3 + s[n].m4 + s[n].m5;     //calculate total marks
            s[n].percentage = s[n].total / 5.0;         //calculate percentage
            if(s[n].percentage>=90)               //check for grades
                s[n].grade='A';
            else if(s[n].percentage>=75)
                s[n].grade='B';
            else if(s[n].percentage>=60)
                s[n].grade='C';
            else if(s[n].percentage>=40)
                s[n].grade='D';
            else
                s[n].grade='F';
            n++;
            printf("Record Added Successfully!\n");
            break;
        case 2:         //display marksheet
            if(n==0)
                printf("No Records Found!\n");
            else
            {
                for(i=0;i<n;i++)
                {
                    printf("\n----------------------------");
                    printf("\nRoll No    : %d", s[i].roll);
                    printf("\nName       : %s", s[i].name);
                    printf("\nMarks      : %d %d %d %d %d",
                           s[i].m1, s[i].m2, s[i].m3,
                           s[i].m4, s[i].m5);
                    printf("\nTotal      : %d", s[i].total);
                    printf("\nPercentage : %.2f%%", s[i].percentage);
                    printf("\nGrade      : %c\n", s[i].grade);
                }
            }
            break;
        case 3:          //search student
            printf("Enter Roll Number : ");
            scanf("%d",&roll);
            found=0;
            for(i=0;i<n;i++)
            {
                if(s[i].roll==roll)
                {
                    printf("\nRoll No      : %d", s[i].roll);
                    printf("\nName         : %s", s[i].name);
                    printf("\nTotal        : %d", s[i].total);
                    printf("\nPercentage   : %.2f%%", s[i].percentage);
                    printf("\nGrade        : %c\n", s[i].grade);
                    found=1;
                    break;
                }
            }
            if(found==0)
                printf("Record Not Found!\n");
            break;
        case 4:          //update marksheet
            printf("Enter Roll Number to Update : ");
            scanf("%d",&roll);
            found=0;
            for(i=0;i<n;i++)
            {
                if(s[i].roll==roll)
                {
                    printf("Enter New Marks of 5 Subjects : ");
                    scanf("%d%d%d%d%d",&s[i].m1, &s[i].m2,
                                         &s[i].m3, &s[i].m4, &s[i].m5);

                    s[i].total = s[i].m1 + s[i].m2 + s[i].m3 + s[i].m4 + s[i].m5;
                    s[i].percentage = s[i].total / 5.0;

                    if(s[i].percentage>=90)
                        s[i].grade='A';
                    else if(s[i].percentage>=75)
                        s[i].grade='B';
                    else if(s[i].percentage>=60)
                        s[i].grade='C';
                    else if(s[i].percentage>=40)
                        s[i].grade='D';
                    else
                        s[i].grade='F';

                    printf("Record Updated Successfully!\n");
                    found=1;
                    break;
                }
            }
            if(found==0)
                printf("Record Not Found!\n");
            break;
        case 5:        //delete marksheet
            printf("Enter Roll Number to Delete  : ");
            scanf("%d",&roll);
            found=0;
            for(i=0;i<n;i++)
            {
                if(s[i].roll==roll)
                {
                    int j;
                    for(j=i;j<n-1;j++)
                        s[j]=s[j+1];
                    n--;
                    printf("Record Deleted Successfully!\n");
                    found=1;
                    break;
                }
            }
            if(found==0)
                printf("Record Not Found!\n");
            break;
        case 6:        //exit the loop
            printf("Exiting.....\n");
            return 0;
        default:
            printf("Invalid Choice!\n");
        }
    }
    return 0;
}