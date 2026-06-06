#include<stdio.h>
#include<math.h>
int main()
{
    int binary, num=0, rem, c=0;
    printf("Enter the binary number : ");
    scanf("%d",&binary);
    while(binary!=0)
    {
        rem=binary%10;          //for getting digits
        num+=rem*pow(2,c);      //concept of conversion of binary into decimal
        binary=binary/10;       //updation
        c++;                    //for getting place value
    }
    printf("Decimal numbar is %d\n",num);
    return 0;
}