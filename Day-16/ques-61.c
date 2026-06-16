#include<stdio.h>
int main()
{
    int n, i, sum=0, expect;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int arr[n-1];
    printf("Enter the elements of array in sequence : ");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];            //sum of all the elements in the array is calculated here
    }
    expect=(n*(n+1))/2;        //it is the formula to calculate the sum of first n natural numbers
    printf("Missing number is %d",expect-sum);
    return 0;
}