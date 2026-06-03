#include<stdio.h>
int main()
{
    int i, num, c=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)     //for cheking factors of number
           c++;          //for counting the factors
    }
    if(c==2)
       printf("The number %d is Prime number\n",num);
    else 
       printf("The number %d is not Prime number\n",num);
    return 0;   
}