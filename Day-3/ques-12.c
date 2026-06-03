#include<stdio.h>
int main()
{
    int n1,n2,lcm=0,i,max;
    printf("Enter the two numbers : ");
    scanf("%d %d",&n1,&n2);
    max=n1>n2?n1:n2;
    for(i=2;i<=10;i++)
    {
        if(max%n1==0&&max%n2==0)
        {
            lcm=max;
            break;
        }
        max*=i;
    }
    printf("The LCM of two numbers %d and %d is %d\n",n1,n2,lcm);
    return 0;
}