#include<stdio.h>
int rev=0;
int reverse(int n)          //recursive function
{
    if(n==0)
        return rev;
    else
    {
        rev=rev*10+(n%10);          //concept of reverse a no.
        return reverse(n/10);       //to call the function itself
    }
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("The Reverse of a number %d is %d\n",num,reverse(num));     //to print the return value of function
    return 0;
}