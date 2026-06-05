#include<stdio.h>
int main()
{
    int i, num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("The factors of number %d\n",num);
        for(i=1;i<=num;i++)         //for printing factors of number
        {
            if(num%i==0)
                printf("%d\n",i);
        }
    }
    else                 //for invalid input
        printf("Invalid Input\n");
    return 0;
}