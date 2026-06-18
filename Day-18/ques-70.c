#include<stdio.h>
int main()
{
    int i, j, n, temp, min;
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
        min = i;                        //assume the first element is the minimum
        for(j=i+1;j<n;j++)              //for number of comparisons in each pass
        {
            if(arr[j]<arr[min])         //for ascending order
            {
                min=j;                //update the index of minimum element
            }
        }
        if(min!=i)                    //if the minimum is not the current position
        {
            temp=arr[i];              //swapping
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    printf("The sorted array using selection sort is ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}