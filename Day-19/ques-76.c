#include<stdio.h>
int main()
{
    int i, j, order, sum=0;
    printf("Enter the order of the square matrix : ");
    scanf("%d",&order);
    int a[order][order];
    printf("Enter the elements of the matrix : \n");
    for(i=0;i<order;i++)              //Input the elements of the matrix
    {
        for(j=0;j<order;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<order;i++)              //Calculate the sum of the diagonal elements
    {
        sum += a[i][i];
    }
    printf("The sum of the diagonal elements is %d",sum);
    return 0;
}