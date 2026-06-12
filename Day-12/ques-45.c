#include<stdio.h>
void palindrome(int n)
{
    int new=0, digit, cpy;
    cpy=n;
    while(n!=0)
    {
        digit=n%10;
        new=new*10+digit;       //reverse number
        n/=10;                  //updation
    }
    if(new==cpy)
         printf("The number %d is Palindrome number\n",cpy);
    else
        printf("The number %d is not Palindrome number\n",cpy);
}
int main()
{
    int num;
    printf("Enter a numbers : ");
    scanf("%d",&num);
    palindrome(num);      //call the palindrome function
    return 0;
}