#include<stdio.h>
int main()
{
    int num, count=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        if(num%2==1)               //checking for reminder is 1 
            count++;               //for counting the set bits
        num=num/2;                 //updation
    }
    printf("Number of set bits is %d\n",count);
    return 0;
}