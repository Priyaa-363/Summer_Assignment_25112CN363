#include<stdio.h>
int main()
{
    int n1, n2, i, j, temp;
    printf("Enter the number of elements in the first array : ");
    scanf("%d",&n1);
    int arr1[n1];
    printf("Enter sorted elements of first array : ");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);       //take input of first array
    }
    printf("Enter the number of elements of the second array : ");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter sorted elements of second array : ");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);       //take input of second array
    }
    int merge[n1+n2];
    for(i=0;i<(n1+n2);i++)         //merge the both array
    {
        if(i<n1)
            merge[i]=arr1[i];
        else
            merge[i]=arr2[i-n1];
    }
    for(i=0;i<n1+n2;i++)
    {
        for(j=0;j<((n1+n2)-i-1);j++)
        {
            if(merge[j]>merge[j+1])         //sorted the merge arrray
            {
                temp=merge[j];
                merge[j]=merge[j+1];
                merge[j+1]=temp;
            }
        }
    }
    printf("The sorted merge array : ");
    for(i=0;i<n1+n2;i++)
    {
        printf("%d ",merge[i]);
    }
    return 0;
}