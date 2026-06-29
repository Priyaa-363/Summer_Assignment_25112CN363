// Menu-Driven String Operations System
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], str2[100];
    int choice;
    // Input the main string
    printf("Enter a string : ");
    gets(str);
    while (1)         //for infinite loop
    {
        // Display menu
        printf("\n======== MENU DRIVEN STRING OPERATIONS ========\n");
        printf("1. Find String Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate String\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        getchar();   // Remove newline from input buffer
        switch (choice)
        {
            case 1:        // Find length of string
                printf("Length = %d\n",strlen(str));
                break;
            case 2:      // Copy string
                strcpy(str2,str);
                printf("Copied String : %s\n",str2);
                break;
            case 3:         // Concatenate another string
                printf("Enter another string : ");
                gets(str2);
                strcat(str,str2);
                printf("Concatenated String : %s\n",str);
                break;
            case 4:       // Compare two strings
                printf("Enter another string : ");
                gets(str2);
                if(strcmp(str,str2)==0)
                    printf("Both strings are Equal...\n");
                else
                    printf("Both strings are Not Equal...\n");
                break;
            case 5:       // Reverse string
                strrev(str);
                printf("Reversed String : %s\n",str);
                break;
            case 6:      // Exit the program
                printf("Exiting Program...\n");
                return 0;
            default:       // Invalid menu choice
                printf("Invalid Choice! Please try again...\n");
        }
    }
    return 0;
}