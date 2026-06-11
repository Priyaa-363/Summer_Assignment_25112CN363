#include<stdio.h>
int maximum(int a, int b, int c)
{
    return (a>b?(a>c?a:c):(b>c?b:c));          //check for the maximum
}
int main()
{
    int x,y,z;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&x,&y,&z);
    printf("Maximum of three numbers %d, %d and %d is %d\n",x,y,z,maximum(x,y,z));      //call the function
    return 0;
}