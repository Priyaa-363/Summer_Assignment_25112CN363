#include<stdio.h>
int main()
{
    int a[50], i, n, ele, pos;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter elements of array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched : ");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)          //searching for the element
        {
            pos=i+1;
            break;
        }
    }
    if(i<n)                     //if element is found then print the position
        printf("Element found at position %d",pos);
    else
        printf("Element not found");
    return 0;
}