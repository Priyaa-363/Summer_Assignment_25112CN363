#include<stdio.h>
int main()
{
    int i, j, r1, c1, r2, c2;
    printf("Enter the number of rows and columns for the first matrix : ");
    scanf("%d %d",&r1,&c1);
    printf("Enter the number of rows and columns for the second matrix : ");
    scanf("%d %d",&r2,&c2);
    if(r1!=r2 || c1!=c2)               //If the number of rows and columns of the two matrices are not equal, then they cannot be subtracted
    {
        printf("Matrices cannot be subtracted");
        return 0;
    }
    else
    {
        int a[r1][c1], b[r2][c2], diff[r1][c1];
        printf("Enter the elements of the first matrix : \n ");
        for(i=0;i<r1;i++)                 //Input the elements of the first matrix
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the elements of the second matrix : \n");
        for(i=0;i<r2;i++)                 //Input the elements of the second matrix
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<r1;i++)               //Subtract the two matrices and store the result in the diff matrix
        {
            for(j=0;j<c1;j++)
            {
                diff[i][j] = a[i][j]-b[i][j];
            }
        }
        printf("The subtracted matrix is \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d ",diff[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}