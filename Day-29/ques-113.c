// Menu-Driven Calculator Program
#include <stdio.h>
int main()
{
    int choice;
    float num1, num2, result;
    while (1)      //infinite loop until return not found
    {
        // Display menu
        printf("\n======== MENU DRIVEN CALCULATOR ========\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        // Exit the program
        if (choice==5)
        {
            printf("Exiting Calculator...\n");
            break;
        }
        // Input two numbers
        printf("Enter first number : ");
        scanf("%f",&num1);
        printf("Enter second number : ");
        scanf("%f",&num2);
        // Perform calculation based on user's choice
        switch (choice)
        {
            case 1:         //add two numbers
                result=num1+num2;
                printf("Result = %.2f\n",result);
                break;
            case 2:          //subtraction of two numbers
                result=num1-num2;
                printf("Result = %.2f\n",result);
                break;
            case 3:        //multiplication of two numbers
                result=num1*num2;
                printf("Result = %.2f\n",result);
                break;
            case 4:         //division of two numbers
                if(num2!=0)
                {
                    result=num1/num2;
                    printf("Result = %.2f\n",result);
                }
                else
                {
                    printf("Error! Division by zero is not poosible\n");
                }
                break;
            default:
                printf("Invalid Choice! Please try again...\n");
        }
    }
    return 0;
}