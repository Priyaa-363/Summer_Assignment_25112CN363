#include<stdio.h>
int main()
{
    int i, n, slarg, larg;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    larg=slarg=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>larg)          //searching for the largest element
        {
            slarg=larg;         //if largest element is found then assign it to second largest
            larg=a[i];          //and assign the new largest element to largest variable
        }
        else if(a[i]>slarg && a[i]!=larg)   //searching for the second largest element
        {
            slarg=a[i];                //if second largest element is found then assign it to second largest variable
        }
    }
    if(larg==slarg)                  //if all elements are same then print the message
        printf("All elements are same");
    else
        printf("Largest element is %d and second largest element is %d",larg,slarg);
    return 0;
}