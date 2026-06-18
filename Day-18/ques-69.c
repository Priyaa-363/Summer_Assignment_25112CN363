#include<stdio.h>
int main()
{
    int i, n, j, temp;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)                 //for number of passes
    {
        for(j=0;j<n-1-i;j++)            //for number of comparisons in each pass
        {
            if(arr[j]>arr[j+1])         //for ascending order
            {
                temp = arr[j];          //swapping
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("The sorted array using bubble sort is ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}