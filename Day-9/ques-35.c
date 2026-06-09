#include<stdio.h>
int main()
{
     int i, j, rows, alpha=64;
     printf("Enter the no. of rows : ");
     scanf("%d",&rows);
     for(i=1;i<=rows;i++)        //loop for rows
     {
        alpha++;                 //store the ASCII value of alphabets
        for(j=1;j<=i;j++)        //loop for columns
        {
            printf("%c",alpha);
        }
        printf("\n");           //for going to the next line or row
     }
     return 0;
}