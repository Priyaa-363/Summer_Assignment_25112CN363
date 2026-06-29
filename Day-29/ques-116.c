// Inventory Management System
#include <stdio.h>
struct Item       //structure to store item's details
{
    int id;
    char name[50];
    int quantity;
    float price;
};
int main()
{
    struct Item item[100];
    int n=0, choice, i, searchId;
    while (1)        //for infinite loop
    {
        // Display menu
        printf("\n======== INVENTORY MANAGEMENT SYSTEM ========\n");
        printf("1. Add Item\n");
        printf("2. Display All Items\n");
        printf("3. Search Item by ID\n");
        printf("4. Update Item Quantity\n");
        printf("5. Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:      // Add a new item
                printf("Enter Item ID : ");
                scanf("%d",&item[n].id);
                printf("Enter Item Name : ");
                scanf("%s",item[n].name);
                printf("Enter Quantity : ");
                scanf("%d",&item[n].quantity);
                printf("Enter Price : ");
                scanf("%f",&item[n].price);
                n++;
                printf("Item Added Successfully!\n");
                break;
            case 2:
                // Display all items
                if(n==0)
                {
                    printf("No items available...\n");
                }
                else
                {
                    printf("\nID\tName\t   Quantity\t   Price\n");
                    printf("=========================================\n");
                    for(i=0;i<n;i++)
                    {
                        printf("%d\t%s\t\t%d\t\t%.2f\n",item[i].id, item[i].name, item[i].quantity, item[i].price);
                    }
                }
                break;
            case 3:       // Search item by ID
                printf("Enter Item ID to search : ");
                scanf("%d",&searchId);
                for(i=0;i<n;i++)
                {
                    if(item[i].id==searchId)
                    {
                        printf("\nItem Found!\n");
                        printf("ID       : %d\n", item[i].id);
                        printf("Name     : %s\n", item[i].name);
                        printf("Quantity : %d\n", item[i].quantity);
                        printf("Price    : %.2f\n", item[i].price);
                        break;
                    }
                }
                if(i==n)
                {
                    printf("Item not found...\n");
                }
                break;
            case 4:      // Update item quantity
                printf("Enter Item ID : ");
                scanf("%d",&searchId);
                for(i=0;i<n;i++)
                {
                    if(item[i].id==searchId)
                    {
                        printf("Enter New Quantity : ");
                        scanf("%d",&item[i].quantity);
                        printf("Quantity Updated Successfully!\n");
                        break;
                    }
                }
                if(i==n)
                {
                    printf("Item not found...\n");
                }
                break;
            case 5:      // Exit the program
                printf("Exiting Inventory Management System...\n");
                return 0;
            default:     // Invalid choice
                printf("Invalid Choice! Please try again...\n");
        }
    }
    return 0;
}