#include<stdio.h>
int main()
{
     int i, j, rows;
     printf("Enter the no. of rows : ");
     scanf("%d",&rows);
     for(i=1;i<=rows;i++)        //loop for rows
     {
        for(j=1;j<=5;j++)        //loop for columns
        {
            if(i==1||i==rows||j==1||j==5)
                  printf("*");
            else
                  printf(" ");
        }
        printf("\n");           //for going to the next line or row
     }
     return 0;
}