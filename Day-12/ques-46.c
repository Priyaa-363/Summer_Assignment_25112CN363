#include<stdio.h>
#include<math.h>
int armstrong(int n)
{
    int sum=0, digit, cpy, c=0;
    cpy=n;
    while(n!=0)
    {
        c++;                    //counting the no. of digits
        n/=10;                  //updation
    }
    while(cpy!=0)
    {
        digit=cpy%10;                  //taking the digits
        sum+=round(pow(digit,c));           //to calulate the sum of powers of digits
        cpy/=10;                       //updation
    }
    return sum;  
}
int main()
{
    int num;
    printf("Enter a numbers : ");
    scanf("%d",&num);
    if(armstrong(num)==num)      //call the armstrong function and check the return value
        printf("The number %d is an armstrong number\n",num);
    else
        printf("The number %d is not an armstrong number\n",num);
    return 0;
}