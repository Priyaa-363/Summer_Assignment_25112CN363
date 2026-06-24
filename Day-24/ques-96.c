#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, j, k;
    printf("Enter a string : ");
    gets(str);
    for(i=0;i<(strlen(str)-1);i++)
    {
        for(j=i+1;j<strlen(str);j++)
        {
            if(str[i]==str[j])        //check for the duplicates
            {
                for(k=j;k<strlen(str);k++)
                {
                    str[k]=str[k+1];
                }
                j--;       //recheck current position
            }
        }
    }
    printf("String after removing duplicates : %s\n",str);
    return 0;
}