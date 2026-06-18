#include<stdio.h>
int main()
{
    int i, n, mid, end, beg, ele, flag=0;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array in ascending order : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched : ");
    scanf("%d",&ele);
    beg=0;
    end=n-1;
    while(beg<=end)                //while the beginning index is less than or equal to the end index, keep searching
    {
        mid=(beg+end)/2;        
        if(arr[mid]==ele)          //if the element is found then set the flag to 1 and break the loop
        {
            flag=1;
            break;
        }
        else if(arr[mid]<ele)       //if the element is greater than the mid element then search in the right half of the array
        {
            beg=mid+1;
        }
        else                        //if the element is smaller than the mid element then search in the left half of the array
        {
            end=mid-1;
        }
    }
    if(flag==1)
    {
        printf("Element %d found at position %d", ele, mid+1);
    }
    else
    {
        printf("Element %d not found", ele);
    }
    return 0;
}