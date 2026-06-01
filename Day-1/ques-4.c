#include<stdio.h>
int main()
{
    int num, count=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        count++;
        num=num/10;
    }
    printf("The number of the digits in given number is %d",count);
    return 0;
}