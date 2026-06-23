#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100], temp;
    int i, j;
    printf("Enter first string : ");
    gets(str1);           //take input of first string
    printf("Enter second string : ");
    gets(str2);          //take input of second string
    if(strlen(str1)==strlen(str2))      //check for the length of both string is equal or not
    {
         for(i=0;i<(strlen(str1)-1);i++)       //sort first string
        {
            for(j=i+1;j<strlen(str1);j++)
            {
                if(str1[i]>str1[j])
                {
                    temp=str1[i];
                    str1[i]=str1[j];
                    str1[j]=temp;
                }
            }
        }
         for(i=0;i<(strlen(str2)-1);i++)       //sort second string
        {
            for(j=i+1;j<strlen(str2);j++)
            {
                if(str2[i]>str2[j])
                {
                    temp=str2[i];
                    str2[i]=str2[j];
                    str2[j]=temp;
                }
            }
        }
        if(strcmp(str1,str2)==0)       //compare both string
             printf("Strings are Anagrams\n");
        else
             printf("Strings are not Anagrams\n");
    }
    else
         printf("Strings are not Anagrams\n");
    return 0;
}