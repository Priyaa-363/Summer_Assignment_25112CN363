#include<stdio.h>
int main()
{
    int num, digit, new=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        digit=num%10;        //for getting digits of number one by one
        new=new*10+digit;    //for getting reverse of the number
        num=num/10;          //to update the number;
    }
    printf("The Reverse of the number is %d",new);
    return 0;
}