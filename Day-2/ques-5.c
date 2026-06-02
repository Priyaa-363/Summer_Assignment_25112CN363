#include<stdio.h>
int main()
{
    int num, digit, sum=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        digit=num%10;  //for getting digits of number one by one
        sum+=digit;    //for getting sum of digits
        num=num/10;    //to update the number;
    }
    printf("The Sum of the digits is %d",sum);
    return 0;
}