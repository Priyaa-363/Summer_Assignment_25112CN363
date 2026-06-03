#include<stdio.h>
int main()
{
    int n1,n2,gcd=0,i;
    printf("Enter the two numbers : ");
    scanf("%d %d",&n1,&n2);
    for(i=1;i<=(n1>n2?n1:n2);i++)
    {
        if(n1%i==0&&n2%i==0)
             gcd=i;
    }
    printf("The GCD of two numbers %d and %d is %d",n1,n2,gcd);
    return 0;
}