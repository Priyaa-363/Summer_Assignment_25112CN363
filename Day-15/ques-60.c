#include<stdio.h>
int main()
{
    int i, n, j=0;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)                    //if the element is zero, swap it with the element at index j
        {
            arr[j]=arr[i];              //moving the non-zero element to the front of the array
            j++;
        }
    }
    while(j<n)                          //filling the remaining elements of the array with zeros
    {
        arr[j]=0;
        j++;
    }
    printf("The array after moving zeros to the end is ");     //printing the modified array
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}