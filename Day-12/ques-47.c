#include<stdio.h>
int fibonacci(int n)
{
    int a=0, b=1, c, i;
    if(n==0)
        return a;
    else if(n==1)
        return b;
    else
    {
        for(i=2; i<=n; i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
}
int main()
{
    int terms;
    printf("Enter no. of terms : ");
    scanf("%d",&terms);
    printf("Fibonacci series : ");
    for(int i=0; i<terms; i++)
    {
        printf("%d ",fibonacci(i));      //call the fibonacci function
    }
    return 0;
}