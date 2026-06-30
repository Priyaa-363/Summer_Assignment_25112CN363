#include <stdio.h>
#include <string.h>
#define MAX 100
// Global arrays
int bookId[MAX], status[MAX];
char bookName[MAX][50], author[MAX][50];
int n=0;
// Function declarations
void addBook();
void displayBooks();
void searchBook();
void issueBook();
void returnBook();
int main()
{
    int choice;
    // Menu loop
    while (1)
    {
        printf("\n======== MINI LIBRARY MANAGEMENT SYSTEM ========\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter Your Choice  : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            addBook();
            break;
        case 2:
            displayBooks();
            break;
        case 3:
            searchBook();
            break;
        case 4:
            issueBook();
            break;
        case 5:
            returnBook();
            break;
        case 6:
            printf("\nThank You!\n");
            return 0;
        default:
            printf("\nInvalid Choice!\n");
        }
    }
}
void addBook()          // Function to add a new book
{
    printf("\nEnter Book ID : ");
    scanf("%d",&bookId[n]);
    printf("Enter Book Name : ");
    scanf(" %[^\n]",bookName[n]);
    printf("Enter Author Name : ");
    scanf(" %[^\n]",author[n]);
    status[n]=0;      // 0=Available
    n++;
    printf("Book Added Successfully!\n");
}
void displayBooks()         // Function to display all books
{
    int i;
    if(n==0)
    {
        printf("\nNo Books Available!\n");
        return;
    }
    printf("\n===== BOOK LIST =====\n");
    for(i=0;i<n;i++)
    {
        printf("\nBook ID : %d\n", bookId[i]);
        printf("Book Name : %s\n", bookName[i]);
        printf("Author : %s\n", author[i]);
        if(status[i]==0)
            printf("Status : Available\n");
        else
            printf("Status : Issued\n");
    }
}
void searchBook()        // Function to search a book
{
    int id, i;
    printf("\nEnter Book ID : ");
    scanf("%d",&id);
    for (i=0;i<n;i++)
    {
        if(bookId[i]==id)
        {
            printf("\nBook Found!\n");
            printf("Book Name : %s\n", bookName[i]);
            printf("Author : %s\n", author[i]);
            if(status[i]==0)
                printf("Status : Available\n");
            else
                printf("Status : Issued\n");
            return;
        }
    }
    printf("Book Not Found!\n");
}
void issueBook()         // Function to issue a book
{
    int id, i;
    printf("\nEnter Book ID : ");
    scanf("%d",&id);
    for(i=0;i<n;i++)
    {
        if(bookId[i]==id)
        {
            if(status[i]==0)
            {
                status[i]=1;
                printf("Book Issued Successfully!\n");
            }
            else
            {
                printf("Book Already Issued!\n");
            }
            return;
        }
    }
    printf("Book Not Found!\n");
}
void returnBook()        // Function to return a book
{
    int id, i;
    printf("\nEnter Book ID : ");
    scanf("%d",&id);
    for(i=0;i<n;i++)
    {
        if(bookId[i]==id)
        {
            if(status[i]==1)
            {
                status[i]=0;
                printf("Book Returned Successfully!\n");
            }
            else
            {
                printf("Book is Already Available!\n");
            }
            return;
        }
    }
    printf("Book Not Found!\n");
}