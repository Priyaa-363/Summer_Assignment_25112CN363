#include<stdio.h>
int main()
{
    int a[10],i,n, even=0, odd=0;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    printf("Enter the elements of the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);           //take the input from the user and store it in the array
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)               //check if the current element is even
        {
            even++;                 //increment the count of even numbers
        }
        else
        {
            odd++;                  //increment the count of odd numbers
        }
    }
    printf("The number of even elements in the array is %d and the number of odd elements is %d",even,odd);
    return 0;
}