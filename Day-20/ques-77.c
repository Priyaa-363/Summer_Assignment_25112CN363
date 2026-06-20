#include<stdio.h>
int main()
{
    int i, j, r1, r2, c1, c2, k;
    printf("Enter the number of rows and columns of first matrix : ");
    scanf("%d %d",&r1,&c1);
    printf("Enter the number of rows and columns of second matrix : ");
    scanf("%d %d",&r2,&c2);
    if(c1!=r2)                    //if number of columns of first matrix is not equal to number of rows of second matrix, then multiplication is not possible
    {
        printf("Matrix multiplication is not possible");
    }
    else
    {
        int a[r1][c1], b[r2][c2], mul[r1][c2];
        printf("Enter the elements of first matrix : \n");
        for(i=0; i<r1; i++)       //taking input of first matrix
        {
            for(j=0; j<c1; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the elements of second matrix : \n");
        for(i=0;i<r2;i++)            //taking input of second matrix
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                mul[i][j]=0;
                for(k=0;k<c1;k++)
                {
                    mul[i][j]+=a[i][k]*b[k][j];        //multiplying the two matrices and storing the result in mul matrix
                }
            }
        }
        printf("The product of the two matrices is : \n");
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("%d ",mul[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}