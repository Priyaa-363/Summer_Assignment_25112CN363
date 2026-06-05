#include<stdio.h>
int main()
{
    int i, num, cpy, digit, sum=0, fact;
    printf("Enter the number : ");
    scanf("%d",&num);
    cpy=num;
    while(num!=0)
    {
        digit=num%10;               //finding the digits of number
        fact=1;
        for(i=1;i<=digit;i++)       //loop for finding the factorials of digits
        {
             fact*=i;
        }
        sum+=fact;                  //sum of factorials of digits
        num=num/10;                 //updation of while loop
    }
    if(cpy==sum)
         printf("The number %d is a Strong number\n",cpy);
    else 
        printf("The number %d is not a Strong number\n",cpy);
    return 0;
}