#include<stdio.h>
int main()
{
    int a[10],i,n;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    printf("Enter the elements of the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);           //take the input from the user and store it in the array
    }
    printf("The elements of the array are : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);         //print the elements of the array
    }
    return 0;
}