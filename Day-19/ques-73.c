#include<stdio.h>
int main()
{
    int i, j, r1, c1, r2, c2;
    printf("Enter the number of rows and columns for the first matrix : ");
    scanf("%d %d",&r1,&c1);
    printf("Enter the number of rows and columns for the second matrix : ");
    scanf("%d %d",&r2,&c2);
    if(r1!=r2||c1!=c2)               //If the number of rows and columns of the two matrices are not equal, then they cannot be added
    {
        printf("Matrices cannot be added");
    }
    else
    {
        int a[r1][c1], b[r2][c2], sum[r1][c1];
        printf("Enter the elements of the first matrix : \n ");
        for(i=0;i<r1;i++)              //Input the elements of the first matrix
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);          
            }
        }
        printf("Enter the elements of the second matrix : \n");
        for(i=0;i<r2;i++)               //Input the elements of the second matrix
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<r1;i++)               //Add the two matrices and store the result in the sum matrix
        {
            for(j=0;j<c1;j++)
            {
                sum[i][j] = a[i][j] + b[i][j];
            }
        }
        printf("The sum of the two matrices is \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d ",sum[i][j]);
            }
            printf("\n");             //Print a new line after each row of the sum matrix
        }
    }
    return 0;
}