#include<stdio.h>
int main()
{
    int i, j, k, rows;
    printf("Enter the no. of rows : ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)                 //loop for printing rows
    {
        for(k=1;k<=rows-i;k++)       //loop for printing space in columns
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)          //loop for printing stars in columns
        {
            printf("*");
        }
        printf("\n");                    //for going to next lines or rows
    }
    return 0;
}