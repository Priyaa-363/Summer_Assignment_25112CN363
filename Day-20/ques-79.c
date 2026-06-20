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
    for(i=0;i<row;i++)
    {
        sum=0;
        for(j=0;j<clmn;j++)
        {
            sum+=a[i][j];       //calculating the sum of each row
        }
        printf("The sum of the elements of row %d is : %d\n",i+1,sum);
    }
    return 0;
}