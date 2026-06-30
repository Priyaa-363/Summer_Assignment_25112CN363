#include <stdio.h>
#include <string.h>
int main()
{
    // Arrays to store book details
    int bookId[100];
    char bookName[100][50];        //string to store book name
    char author[100][50];          //string to store author of book
    int status[100];      // 0=Available, 1=Issued
    int n=0;            // Number of books
    int choice, i, id, found;
    // Infinite loop for menu
    while (1)
    {
        printf("\n========== MINI LIBRARY SYSTEM ==========\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter Your Choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:       // Add a new book
            printf("\nEnter Book ID : ");
            scanf("%d",&bookId[n]);
            printf("Enter Book Name : ");
            scanf(" %[^\n]",bookName[n]);
            printf("Enter Author Name : ");
            scanf(" %[^\n]",author[n]);
            status[n]=0;     // New book is available
            n++;
            printf("\nBook Added Successfully!\n");
            break;
        case 2:      // Display all books
            if(n==0)
            {
                printf("\nNo Books Available!\n");
            }
            else
            {
                printf("\n========== BOOK LIST ==========\n");

                for(i=0;i<n;i++)
                {
                    printf("\nBook %d\n",i+1);
                    printf("Book ID     : %d\n",bookId[i]);
                    printf("Book Name   : %s\n",bookName[i]);
                    printf("Author Name : %s\n",author[i]);
                    if(status[i]==0)
                        printf("Status      : Available\n");
                    else
                        printf("Status      : Issued\n");
                }
            }
            break;
        case 3:      // Search book by ID
            printf("\nEnter Book ID to Search : ");
            scanf("%d",&id);
            found=0;
            for(i=0;i<n;i++)
            {
                if(bookId[i]==id)
                {
                    printf("\nBook Found!\n");
                    printf("Book ID     : %d\n",bookId[i]);
                    printf("Book Name   : %s\n",bookName[i]);
                    printf("Author Name : %s\n",author[i]);
                    if(status[i]==0)
                        printf("Status      : Available\n");
                    else
                        printf("Status      : Issued\n");
                    found=1;
                    break;
                }
            }
            if(found==0)
                printf("\nBook Not Found!\n");
            break;
        case 4:       // Issue a book
            printf("\nEnter Book ID to Issue : ");
            scanf("%d",&id);
            found=0;
            for(i=0;i<n;i++)
            {
                if(bookId[i]==id)
                {
                    found=1;

                    if(status[i]==0)
                    {
                        status[i]=1;
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
        case 5:       // Return a book
            printf("\nEnter Book ID to Return : ");
            scanf("%d",&id);
            found=0;
            for(i=0;i<n;i++)
            {
                if(bookId[i]==id)
                {
                    found=1;

                    if(status[i]==1)
                    {
                        status[i]=0;
                        printf("\nBook Returned Successfully!\n");
                    }
                    else
                    {
                        printf("\nBook is Already Available!\n");
                    }
                    break;
                }
            }
            if (found==0)
                printf("\nBook Not Found!\n");
            break;
        case 6:       // Exit the program
            printf("\nThank You!\n");
            return 0;
        default:      // Invalid choice
            printf("\nInvalid Choice! Please Try Again...\n");
        }
    }
    return 0;
}