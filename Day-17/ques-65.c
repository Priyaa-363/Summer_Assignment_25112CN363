#include<stdio.h>
int main()
{
    int i, n1, n2, arr1[50], arr2[50], merge[100];
    printf("Enter the no. of elements in first array : ");
    scanf("%d",&n1);
    printf("Enter elements of first array : ");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);             //taking input for first array
    }
    printf("Enter the no. of elements in second array : ");
    scanf("%d",&n2);
    printf("Enter elements of second array : ");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);           //taking input for second array
    }
    for(i=0;i<n1;i++)
    {
        merge[i] = arr1[i];             //merging first array into merge array
    }
    for(i=0;i<n2;i++)
    {
        merge[n1+i] = arr2[i];           //merging second array into merge array
    }
    printf("Merged array : ");
    for(i=0;i<n1+n2;i++)
    {
        printf("%d ", merge[i]);
    }
    return 0;
}