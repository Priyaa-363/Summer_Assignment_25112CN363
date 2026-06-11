#include<stdio.h>
int factorial(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact*=i;            //to calculate the factorial of number
    }
    return fact;            //return factorial to main function 
}
int main()
{
    int num;
    printf("Enter a numbers : ");
    scanf("%d",&num);
    printf("Factorial of number %d is %d\n",num,factorial(num));      //call and printf the factorial function
    return 0;
}