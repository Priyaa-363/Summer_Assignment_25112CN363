#include<stdio.h>
#include<string.h>
int main()
{
    int n, i, j;
    char temp[50];
    printf("Enter number of names : ");
    scanf("%d",&n);            //take input of number of names
    char name[n][50];
    printf("Enter the names : \n");
    for(i=0;i<n;i++)
    {
        scanf("%s",&name[i]);         //take input of names
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(strcmp(name[i],name[j])>0)        //compare names according to alphabetical order
            {
                strcpy(temp,name[i]);            //swaping
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }
    printf("Names in Alphabetical order : \n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",name[i]);
    }
    return 0;
}