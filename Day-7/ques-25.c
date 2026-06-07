#include<stdio.h>
int factorial(int a)                    //recursive function
{
    if(a==0)
        return 0;                       //factorial of number 0
    else if(a==1)
        return 1;                       //factorial of number 1
    else
        return a*factorial(a-1);        //to call the function itself and find factorial
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Factorial of number %d is %d\n",num,factorial(num));   //call and take return value from function
    return 0;
}