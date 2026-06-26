#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    if(age<18)            //compare with eligible criteria
        printf("You are not eligible to vote\n");
    else
        printf("You are eligible to vote\n");
    return 0;
}