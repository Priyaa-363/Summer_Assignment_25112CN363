#include<stdio.h>
int main()
{
    int i, n, j;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Duplicate elements in the array are : ");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])          //searching for duplicate elements
            {
                printf("%d ",a[i]);     //if duplicate element is found then print it
                break;              //break the inner loop to avoid printing the same element multiple times
            }
        }
    }
    return 0;
}