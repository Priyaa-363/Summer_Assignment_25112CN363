#include<stdio.h>
int main()
{
    int num, i , larg=0, j, c;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num>0)
    {
        for(i=1;i<=num;i++)          //loop for finding factors
        {
            if(num%i==0)
            {
                c=0;
                for(j=1;j<=i;j++)      //loop for finding Prime Factors
                {
                    if(i%j==0)
                        c++;
                }
                if(c==2&&i>larg)       //for storing largest prime number
                    larg=i;
            }
        }
        printf("The largest Prime Factor of number %d is %d\n",num,larg);
    }
    else         //for invalid input
        printf("Invalid Input\n");
    return 0;
}