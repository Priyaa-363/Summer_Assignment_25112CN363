#include<stdio.h>
int main()
{
    int num, pow, i;
    long result=1;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Enter the power : ");
    scanf("%d",&pow);
    for(i=1;i<=pow;i++)           //loop for continue multiplication up to the power
    {
        result*=num;             //multiply the number up to the given power
    }
    printf("%d^%d is %ld\n",num,pow,result);
    return 0;
}