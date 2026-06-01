#include<stdio.h>
int main()
{
    int n, i, sum=0;
    printf("Enter the last natural number for sum : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("Sum of first %d Natural numbers is %d",n,sum);
    return 0;
}