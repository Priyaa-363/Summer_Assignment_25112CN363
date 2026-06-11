#include<stdio.h>
void prime(int n)
{
     int c=0,i;
     for(i=1;i<=n;i++)
     {
        if(n%i==0)         //check for factors
             c++;
     }
     if(c==2)
        printf("The number %d is Prime number\n",n);
    else
        printf("The number %d is not Prime number\n",n);
}
int main()
{
    int num;
    printf("Enter a numbers : ");
    scanf("%d",&num);
    prime(num);                  //call the prime function
    return 0;
}