#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100], temp[200];
    printf("Enter first string : ");
    gets(str1);                          //take input of first string
    printf("Enter second string : ");
    gets(str2);                          //take input of second string
    if(strlen(str1)!=strlen(str2))       //check and compare length of both strings
    {
        printf("Strings are not rotation of each other\n");
    }
    else
    {
        strcpy(temp,str1);               //copy the first string in temp
        strcat(temp,str1);               //double the fist string by joining it 
        if(strstr(temp,str2)!=NULL)         //check for the second string in the temp string
            printf("Strings are rotation of each other\n");
        else
            printf("Strings are not rotation of each other\n");
    }
    return 0;
}