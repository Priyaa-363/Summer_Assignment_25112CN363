#include<stdio.h>
int main()
{
    int i, n, j, k;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])     //duplicate elements are found here
            {
                for(k=j;k<n-1;k++)
                {
                    arr[k]=arr[k+1];   //duplicate element is removed by shifting the elements to left
                }
                n--;    //size of array is reduced by 1 after removing duplicate element
                j--;    //j is decremented to check for next element at same index after shifting
            }
        }
    }
    printf("Array without duplicate elements : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);   //array without duplicate elements is printed here
    }
    return 0;
}