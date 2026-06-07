#include<stdio.h>
int sumDigits(int n)
{
    if(n==0)
         return 0;
    else
         return (n%10)+sumDigits(n/10);       //to call the function itself and concept of finding sum of digits    
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("The sum of digits of a number %d is %d\n",num,sumDigits(num));    //to print the return value of function
    return 0;
}