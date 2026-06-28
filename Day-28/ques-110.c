#include <stdio.h>
#include <string.h>
// Structure for Bank Account
struct Bank
{
    int accNo;
    char name[50];
    float balance;
};
int main()
{
    struct Bank user[100];
    int n=0;
    int choice, i, found;
    int searchAcc;
    float amount;
    while(1)
    {
        printf("\n========== BANK MANAGEMENT SYSTEM ==========\n");
        printf("1. Create Account\n");
        printf("2. Display All Accounts\n");
        printf("3. Search Account\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Delete Account\n");
        printf("7. Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:      // Create Account
                printf("\nEnter Account Number : ");
                scanf("%d",&user[n].accNo);
                printf("Enter Account Holder Name : ");
                scanf(" %[^\n]",user[n].name);
                printf("Enter Initial Balance : ");
                scanf("%f",&user[n].balance);
                n++;
                printf("\nAccount Created Successfully!\n");
                break;
            case 2:         // Display All Accounts
                if(n==0)
                {
                    printf("\nNo Accounts Found!\n");
                }
                else
                {
                    printf("\n========== ACCOUNT LIST ==========\n");

                    for(i=0;i<n;i++)
                    {
                        printf("\nAccount %d\n",i+1);
                        printf("Account No : %d\n", user[i].accNo);
                        printf("Name       : %s\n", user[i].name);
                        printf("Balance    : %.2f\n", user[i].balance);
                    }
                }
                break;
            case 3:       // Search Account
                printf("\nEnter Account Number : ");
                scanf("%d",&searchAcc);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(user[i].accNo==searchAcc)
                    {
                        printf("\nAccount Found!\n");
                        printf("Account No : %d\n", user[i].accNo);
                        printf("Name       : %s\n", user[i].name);
                        printf("Balance    : %.2f\n", user[i].balance);
                        found=1;
                        break;
                    }
                }
                if(found==0)
                    printf("\nAccount Not Found!\n");
                break;
            case 4:        // Deposit Money
                printf("\nEnter Account Number : ");
                scanf("%d",&searchAcc);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(user[i].accNo==searchAcc)
                    {
                        printf("Enter Deposit Amount : ");
                        scanf("%f",&amount);
                        user[i].balance+=amount;
                        printf("\nAmount Deposited Successfully!\n");
                        printf("Updated Balance = %.2f\n", user[i].balance);
                        found=1;
                        break;
                    }
                }
                if(found==0)
                    printf("\nAccount Not Found!\n");
                break;
            case 5:         // Withdraw Money
                printf("\nEnter Account Number : ");
                scanf("%d",&searchAcc);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(user[i].accNo==searchAcc)
                    {
                        printf("Enter Withdraw Amount : ");
                        scanf("%f",&amount);
                        if(amount<=user[i].balance)
                        {
                            user[i].balance-=amount;
                            printf("\nAmount Withdrawn Successfully!\n");
                            printf("Remaining Balance = %.2f\n", user[i].balance);
                        }
                        else
                        {
                            printf("\nInsufficient Balance!\n");
                        }
                        found=1;
                        break;
                    }
                }
                if(found==0)
                    printf("\nAccount Not Found!\n");
                break;
            case 6:     // Delete Account
                printf("\nEnter Account Number : ");
                scanf("%d",&searchAcc);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(user[i].accNo==searchAcc)
                    {
                        int j;
                        for(j=i;j<n-1;j++)
                        {
                            user[j]=user[j+1];
                        }
                        n--;
                        printf("\nAccount Deleted Successfully!\n");
                        found=1;
                        break;
                    }
                }
                if(found==0)
                    printf("\nAccount Not Found!\n");
                break;
            case 7:
                printf("\nThank You!\n");
                return 0;
            default:
                printf("\nInvalid Choice!\n");
        }
    }
    return 0;
}