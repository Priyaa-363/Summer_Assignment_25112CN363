#include <stdio.h>
#include <string.h>
// Structure to store book details
struct Library
{
    int id;
    char title[50];
    char author[50];
    int status;   // 0=Available, 1=Issued
};
int main()
{
    struct Library book[100];
    int n=0, choice;
    int i, searchId, found;
    while (1)    //infinite loop until return not found
    {
        // Display Menu
        printf("\n========== LIBRARY MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:         // Add Book
                printf("\nEnter Book ID : ");
                scanf("%d",&book[n].id);
                printf("Enter Book Title : ");
                scanf(" %[^\n]",book[n].title);
                printf("Enter Author Name : ");
                scanf(" %[^\n]",book[n].author);     
                // New book is available
                book[n].status=0;
                n++;
                printf("\nBook Added Successfully!\n");
                break;
            case 2:          // Display All Books
                if(n==0)
                {
                    printf("\nNo Books Available!\n");
                }
                else
                {
                    printf("\n------ Book List ------\n");

                    for(i=0;i<n;i++)
                    {
                        printf("\nBook %d\n",i+1);
                        printf("ID     : %d\n",book[i].id);
                        printf("Title  : %s\n",book[i].title);
                        printf("Author : %s\n",book[i].author);
                        if(book[i].status==0)
                            printf("Status : Available\n");
                        else
                            printf("Status : Issued\n");
                    }
                }
                break;
            case 3:        // Search Book
                printf("\nEnter Book ID to Search : ");
                scanf("%d",&searchId);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(book[i].id==searchId)
                    {
                        printf("\nBook Found!\n");
                        printf("ID     : %d\n", book[i].id);
                        printf("Title  : %s\n", book[i].title);
                        printf("Author : %s\n", book[i].author);
                        if(book[i].status==0)
                            printf("Status : Available\n");
                        else
                            printf("Status : Issued\n");
                        found=1;
                        break;
                    }
                }
                if(found==0)
                    printf("\nBook Not Found!\n");
                break;
            case 4:        // Issue Book
                printf("\nEnter Book ID to Issue : ");
                scanf("%d",&searchId);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(book[i].id==searchId)
                    {
                        found=1;
                        if(book[i].status==0)
                        {
                            book[i].status=1;
                            printf("\nBook Issued Successfully!\n");
                        }
                        else
                        {
                            printf("\nBook is Already Issued!\n");
                        }
                        break;
                    }
                }
                if(found==0)
                    printf("\nBook Not Found!\n");
                break;
            case 5:             // Return Book
                printf("\nEnter Book ID to Return : ");
                scanf("%d",&searchId);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(book[i].id==searchId)
                    {
                        found=1;
                        if(book[i].status==1)
                        {
                            book[i].status=0;
                            printf("\nBook Returned Successfully!\n");
                        }
                        else
                        {
                            printf("\nBook is Already Available!\n");
                        }
                        break;
                    }
                }
                if(found==0)
                    printf("\nBook Not Found!\n");
                break;
            case 6:      // Exit
                printf("\nThank You!\n");
                return 0;
            default:
                printf("\nInvalid Choice! Please Try Again.\n");
        }
    }
    return 0;
}