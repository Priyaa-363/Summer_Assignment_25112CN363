#include<stdio.h>
int main()
{
    int i, num;
    printf("Enter the desired number : ");
    scanf("%d",&num);
    printf("The multiplication table of the %d number : \n",num);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}