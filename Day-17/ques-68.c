#include<stdio.h>
int main()
{
    int i, j, n1, n2, arr1[50], arr2[50];
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
    printf("Common elements in both arrays : ");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(arr1[i] == arr2[j])       //checking if element of first array is present in second array
            {
                printf("%d ", arr1[i]);   //printing common elements
                break;
            }
        }
    }
    return 0;
}