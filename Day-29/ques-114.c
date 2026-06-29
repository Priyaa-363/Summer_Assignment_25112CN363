// Menu-Driven Array Operations System
#include <stdio.h>
int main()
{
    int arr[100], n, i, j, temp, choice, sum=0, max, min, search, found=0;
    // Input array size
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    // Input array elements
    printf("Enter %d elements :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    while (1)         //for infinite loop
    {
        // Display menu
        printf("\n======== MENU-DRIVEN ARRAY OPERATIONS ========\n");
        printf("1. Display Array\n");
        printf("2. Find Sum\n");
        printf("3. Find Maximum Element\n");
        printf("4. Find Minimum Element\n");
        printf("5. Search an Element\n");
        printf("6. Sort Array\n");
        printf("7. Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:         // Display array elements
                printf("Array Elements : ");
                for(i=0;i<n;i++)
                {
                    printf("%d ",arr[i]);
                }
                printf("\n");
                break;
            case 2:          // Calculate sum of array
                sum=0;
                for(i=0;i<n;i++)
                {
                    sum+=arr[i];
                }
                printf("Sum = %d\n",sum);
                break;
            case 3:           // Find maximum element
                max=arr[0];
                for(i=1;i<n;i++)
                {
                    if(arr[i]>max)
                        max=arr[i];
                }
                printf("Maximum Element = %d\n",max);
                break;
            case 4:           // Find minimum element
                min=arr[0];
                for(i=1;i<n;i++)
                {
                    if(arr[i]<min)
                        min=arr[i];
                }
                printf("Minimum Element = %d\n",min);
                break;
            case 5:         // Search an element
                printf("Enter element to search : ");
                scanf("%d",&search);
                found=0;
                for(i=0;i<n;i++)
                {
                    if(arr[i]==search)
                    {
                        printf("Element found at position %d\n",i+1);
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Element not found!\n");
                }
                break;
            case 6:         //sort array
                for(i=0;i<n;i++)
                {
                    for(j=0;j<n-i-1;j++)
                    {
                        if(arr[j]>arr[j+1])
                        {
                            temp=arr[j];
                            arr[j]=arr[j+1];
                            arr[j+1]=temp;
                        }
                    }
                }
                printf("Array is sorted successfully...");
                break;
            case 7:         // Exit the program
                printf("Exiting Program...\n");
                return 0;
            default:         // Invalid choice
                printf("Invalid Choice! Please try again.\n");
        }
    }
    return 0;
}