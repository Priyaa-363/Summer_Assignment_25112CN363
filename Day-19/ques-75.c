#include<stdio.h>
int main()
{
    int i, j, row, clmn;
    printf("Enter the number of rows and columns for the matrix : ");
    scanf("%d %d",&row,&clmn);
    int a[row][clmn];
    printf("Enter the elements of the matrix : \n");
    for(i=0;i<row;i++)              //Input the elements of the matrix
    {
        for(j=0;j<clmn;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The transposed matrix is \n");
    for(i=0;i<clmn;i++)             //Print the transposed matrix
    {
        for(j=0;j<row;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");             //Print a new line after
    }
    return 0;
}