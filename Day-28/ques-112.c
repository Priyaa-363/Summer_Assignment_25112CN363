#include <stdio.h>
#include <string.h>
// Structure to store contact details
struct Contact
{
    char name[50];
    char phone[15];
};
int main()
{
    struct Contact c[100];
    int n=0, choice, i, found;
    char searchName[50];
    while(1)
    {
        printf("\n======== CONTACT MANAGEMENT SYSTEM ========\n");
        printf("1. Add Contact\n");
        printf("2. View All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:         // Add Contact
                printf("\nEnter Name : ");
                scanf(" %[^\n]",c[n].name);
                printf("Enter Phone Number : ");
                scanf("%s",c[n].phone);
                n++;
                printf("\nContact Added Successfully!\n");
                break;
            case 2:          // View All Contacts
                if(n==0)
                {
                    printf("\nNo Contacts Available!\n");
                }
                else
                {
                    printf("\n===== CONTACT LIST =====\n");

                    for(i=0;i<n;i++)
                    {
                        printf("\nContact %d\n",i+1);
                        printf("Name  : %s\n",c[i].name);
                        printf("Phone : %s\n",c[i].phone);
                    }
                }
                break;
            case 3:          // Search Contact
                printf("\nEnter Name to Search : ");
                scanf(" %[^\n]",searchName);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(strcmp(c[i].name,searchName)==0)
                    {
                        printf("\nContact Found!\n");
                        printf("Name  : %s\n", c[i].name);
                        printf("Phone : %s\n", c[i].phone);
                        found=1;
                        break;
                    }
                }
                if(found==0)
                    printf("\nContact Not Found!\n");
                break;
            case 4:          // Delete Contact
                printf("\nEnter Name to Delete : ");
                scanf(" %[^\n]",searchName);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(strcmp(c[i].name, searchName)==0)
                    {
                        int j;
                        for(j=i;j<n-1;j++)
                        {
                            c[j]=c[j+1];
                        }
                        n--;
                        found=1;
                        printf("\nContact Deleted Successfully!\n");
                        break;
                    }
                }
                if(found==0)
                    printf("\nContact Not Found!\n");
                break;
            case 5:         // Exit
                printf("\nThank You!\n");
                return 0;
            default:
                printf("\nInvalid Choice! Please Try Again\n");
        }
    }
    return 0;
}