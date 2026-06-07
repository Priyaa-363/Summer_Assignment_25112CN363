#include<stdio.h>
int fibonacci(int n)           //recursive function
{
    if(n==0)
       return 0;
    else if(n==1)
        return 1;
    else
        return fibonacci(n-1)+fibonacci(n-2);      //to call the function itself and find fibonacci
}
int main()
{
    int terms,i;
    printf("Enter the no. of terms for series : ");
    scanf("%d",&terms);
    printf("Fibonacci series : \n");
    for(i=0;i<terms;i++)
    {
            printf("%d\t",fibonacci(i));   //to print the return value of function
    }
    return 0;
}