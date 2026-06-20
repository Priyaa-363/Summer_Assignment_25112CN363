#include<stdio.h>
int main()
{
    int i, j, row, clmn, sum;
    printf("Enter the number of rows and columns of the matrix : ");
    scanf("%d %d",&row,&clmn);
    int a[row][clmn];
    printf("Enter the elements of the matrix : \n");
    for(i=0;i<row;i++)       //taking input of the matrix
    {
        for(j=0;j<clmn;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<clmn;j++)
    {
        sum=0;
        for(i=0;i<row;i++)
        {
            sum+=a[i][j];       //calculating the sum of each column
        }
        printf("The sum of the elements of column %d is : %d\n",j+1,sum);
    }
    return 0;
}