#include<stdio.h>
int main()
{
    int num, binary=0, place=1, rem;
    printf("Enter a decimal number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%2;                  //for getting reminder
        binary+=rem*place;          //concept of conversion of decimal to binary
        place*=10;                  //adding reminder in front
        num=num/2;                  //for updation
    }
    printf("Binary number is %d\n",binary);
    return 0;
}