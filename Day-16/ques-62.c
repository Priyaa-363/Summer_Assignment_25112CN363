#include<stdio.h>
int main()
{
    int i, n, j, maxfreq=0, freq, ele;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        freq=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                freq++;         //frequency of each element is calculated here
            }
        }
        if(freq>maxfreq)
        {
            maxfreq=freq;   //maximum frequency is stored in maxfreq variable
            ele=arr[i];     //the element with maximum frequency is stored in ele variable
        }
    }
    printf("Most frequent element is %d and it appears %d times",ele,maxfreq);
    return 0;
}