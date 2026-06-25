#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    int i, j, k, flag;
    printf("Enter first string : ");
    gets(str1);                       // take input of first string
    printf("Enter second string : ");
    gets(str2);                       //take input of second string
    printf("The common characters in the both string '%s' and '%s' : ",str1,str2);
    for(i=0;i<strlen(str1);i++)
    {
        flag=1;
        for(k=0;k<i;k++)
        {
            if(str1[i]==str1[k])       //check for the duplication
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            for(j=0;j<strlen(str2);j++)
            {
                if(str1[i]==str2[j]&&str1[i]!='\n')        //check for common characters
                {
                    printf("%c ",str1[i]);               //print common characters
                    break;
                }
            }
        }
    }
    return 0;
}