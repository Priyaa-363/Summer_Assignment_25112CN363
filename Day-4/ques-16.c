#include<stdio.h>
#include<math.h>
int main()
{
    int num, cpy, digit, c, sum, i, range;
    printf("Enter the range : ");
    scanf("%d",&range);
    printf("The Armstrong numbers in %d range are : \n",range);
    for(i=1;i<=range;i++)     //for finding armstrong no. in a given range
     {  
         c=0;
         sum=0;
         cpy=i;              //copy the no. for further checking for armstrong no.
         num=i;              //copy the no. for further concept
         while(num!=0)         //for counting no. of digits present in the no.
         {
             c++;
             num=num/10;
         }
         while(cpy!=0)        //for finding sum of digits with power of no. digits
         {
             digit=cpy%10;
             sum+=round(pow(digit,c));
             cpy=cpy/10;
         }
         if(i==sum)
             printf("%d\n",i);
     }
     return 0;
}