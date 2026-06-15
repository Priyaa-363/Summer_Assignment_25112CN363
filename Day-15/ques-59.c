#include<stdio.h>
int main()
{
    int i, n, last;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    last=arr[n-1];              //storing the last element of the array in a variable
    for(i=n-1;i>0;i--)
    {
        arr[i] = arr[i-1];       //shifting the elements of the array to the right
    }
    arr[0] = last;             //placing the last element at the first position
    printf("The array after right rotation is ");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}