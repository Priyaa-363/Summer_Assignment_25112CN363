#include<stdio.h>
int perfect(int n)
{
    int i, sum=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)         //check for factors
            sum+=i;        //add the factors
    }
    return sum;
}
int main()
{
    int num;
    printf("Enter a numbers : ");
    scanf("%d",&num);
    if(perfect(num)==num)      //call the perfect function and check the return value
        printf("The number %d is an perfect number\n",num);
    else
        printf("The number %d is not an perfect number\n",num);
    return 0;
}