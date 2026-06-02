#include<stdio.h>
int main()
{
    int num, digit, new=0, cpy;
    printf("Enter the number : ");
    scanf("%d",&num);
    cpy=num;          //copy the number into other variable
    while(num!=0)
    {
        digit=num%10;        //for getting digits of number one by one
        new=new*10+digit;    //for getting reverse number
        num=num/10;          //to update the number;
    }
    if(new==cpy)
        printf("The number %d is Palindrome\n",cpy);
    else
        printf("The number %d is not Palindrome\n",cpy);
    return 0;
}