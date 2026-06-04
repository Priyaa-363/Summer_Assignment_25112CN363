#include<stdio.h>
#include<math.h>
int main()
{
    int num, cpy, cpy1, digit, c=0, sum=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    cpy=num;              //copy the given no. for further checking for armstrong no.
    cpy1=num;             //copy the given no. for further concept
    while(num!=0)         //for counting no. of digits present in the no.
    {
        c++;
        num=num/10;
    }
    while(cpy1!=0)        //for finding sum of digits with power of no. digits
    {
        digit=cpy1%10;
        sum+=round(pow(digit,c));
        cpy1=cpy1/10;
    }
    if(cpy==sum)
         printf("The Number %d is Armstrong number\n",cpy);
    else
        printf("The Number %d is not Armstrong number\n",cpy);
    return 0;
}