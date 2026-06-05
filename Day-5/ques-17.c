#include<stdio.h>
int main()
{
    int num, i, sum=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)          //for finding divisors
           sum+=i;            //sum all the divisors of a number
    }
    if(num==sum&&num>0)
        printf("Number %d is a Perfect number\n",num);
    else
        printf("Number %d is not a Perfect number\n",num);
    return 0;
}
