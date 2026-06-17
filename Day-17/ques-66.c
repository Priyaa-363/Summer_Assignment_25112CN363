#include<stdio.h>
int main()
{
    int i, j, n1, n2, arr1[50], arr2[50], merge[100], flag;
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
        flag = 0;
        for(j=0;j<n1;j++)
        {
            if(arr2[i] == arr1[j])       //checking if element of second array is present in first array
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            merge[n1] = arr2[i];           //merging second array into merge array if element is not present in first array
            n1++;
        }  
    }
    printf("union of arrays : ");
    for(i=0;i<n1;i++)
    {
        printf("%d ", merge[i]);
    }
    return 0;
}