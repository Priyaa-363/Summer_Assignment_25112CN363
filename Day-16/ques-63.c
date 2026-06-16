#include<stdio.h>
int main()
{
    int n, i, sum, j, c=0;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter required sum : ");
    scanf("%d",&sum);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)     //two elements whose sum is equal to the required sum are found here
            {
                printf("Two elements whose sum is %d are %d and %d\n",sum,arr[i],arr[j]);
                c++;
            }
        }
    }
    if(c==0)
    {
        printf("No two elements found whose sum is %d",sum);
    }
    return 0;
}