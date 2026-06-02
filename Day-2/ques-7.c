#include<stdio.h>
int main()
{
    int num, digit, prod=1;
    printf("Enter the number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        digit=num%10;   //for getting digits of number one by one
        prod*=digit;    //for getting product of digits
        num=num/10;     //to update the number;
    }
    printf("The Product of the digits is %d",prod);
    return 0;
}