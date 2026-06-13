#include<stdio.h>
int main()
{
    int a[10],i,n, larg, small;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    printf("Enter the elements of the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);           //take the input from the user and store it in the array
    }
    larg = a[0];
    small = a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>larg)        //if the current element is greater than the largest element, update the largest element
        {
            larg = a[i];
        }
        if(a[i]<small)       //if the current element is smaller than the smallest element, update the smallest element
        {
            small = a[i];
        }
    }
    printf("The largest element in the array is %d and the smallest element is %d",larg,small);
    return 0;
}