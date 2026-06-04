#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i;
    printf("Enter the no. of terms : ");
    scanf("%d",&n);
    printf("Fibonacci Series is : \n");
    for(i=1;i<=n;i++)
    {
        printf("%d\n",a);     //print fibonacci series
        c=a+b;    //concept of fibonacci series
        a=b;
        b=c;
    }
    return 0;
}