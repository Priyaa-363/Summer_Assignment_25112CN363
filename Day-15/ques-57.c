#include<stdio.h>
int main()
{
    int i, n, temp;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        temp = arr[i];               //swapping the elements of the array
        arr[i] = arr[n-i-1];    
        arr[n-1-i] = temp;
    }
    printf("The reversed array is ");     //printing the reversed array
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}