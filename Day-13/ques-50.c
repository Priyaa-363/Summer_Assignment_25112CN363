#include<stdio.h>
int main()
{
    int a[10],i,n, sum=0, average;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);      //take the input from user and store it in the array
        sum+=a[i];              //add each element to the sum
    }
    average = sum/n;            //calculate the average
    printf("The sum and average of the elements in the array is %d and %d",sum,average); 
    return 0;
}