#include<stdio.h>
int main()
{
    int realpin=4321, pin, choice;
    float balance=10000, amount;
    printf("Enter your ATM pin : ");
    scanf("%d",&pin);              //take input of pin
    if(pin!=realpin)               //check for correct pin
    {
        printf("Incorrect Pin\n");
        return 0;
    }
    else
    {
        do
        {
            printf("\n====== ATM MENU ======\n");
            printf("1. Check Balance\n");
            printf("2. Withdraw\n");
            printf("3. Deposit\n");
            printf("4. Exit\n");
            printf("Enter you choice : ");
            scanf("%d",&choice);             //take input of choice
            switch(choice)
            {
                case 1:
                    printf("Current Balance = %.2f\n",balance);
                    break;
                case 2:
                    printf("Enter amount to withdraw : ");
                    scanf("%f",&amount);
                    if(amount<=balance)
                    {
                        balance-=amount;
                        printf("Withdraw Successful...\n");
                    }
                    else
                    {
                        printf("Insufficient balance in the account...\n");
                    }
                    break;
                case 3:
                    printf("Enter amount to deposit : ");
                    scanf("%f",&amount);
                    balance+=amount;
                    printf("Deposit Successful...\n");
                    break;
                case 4:
                    printf("Thank you for using the ATM\n");
                    break;
                default:
                    printf("Invalid choice\n");
            }
        }while(choice!=4);
    }
    return 0;
}