#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i;
    printf("Enter the no. of terms : ");
    scanf("%d",&n);
    if(n==1)
        printf("Nth term is %d\n",a);
    else if(n==2)
        printf("Nth term is %d\n",b);
    else
    {
        for(i=3;i<=n;i++)
        {
            c=a+b;          //concept of fibonacci series
            a=b;
            b=c;
        }
        printf("Nth term is %d\n",c);      //print nth term of fibonaccci series
    }
    return 0;
}