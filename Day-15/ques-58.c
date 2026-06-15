#include<stdio.h>
int main()
{
    int i, n, first;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    first=arr[0];               //storing the first element of the array in a variable
    for(i=0;i<n-1;i++)
    {
        arr[i] = arr[i+1];       //shifting the elements of the array to the left
    }
    arr[n-1] = first;           //placing the first element at the last position
    printf("The array after left rotation is ");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}