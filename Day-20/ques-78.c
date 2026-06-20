#include<stdio.h>
int main()
{
    int i, j, order, flag=0;
    printf("Enter the order of the matrix : ");
    scanf("%d",&order);
    int a[order][order];
    printf("Enter the elements of the matrix : \n");
    for(i=0; i<order; i++)       //taking input of the matrix
    {
        for(j=0; j<order; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<order; i++)
    {
        for(j=0; j<order; j++)
        {
            if(a[i][j]!=a[j][i])       //checking if the matrix is symmetric or not
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        printf("The matrix is symmetric");
    }
    else
    {
        printf("The matrix is not symmetric");
    }
    return 0;
}