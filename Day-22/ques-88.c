#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, len;
    printf("Enter a string : ");
    gets(str);                //take input string
    len=strlen(str);          //find and store the length of the string
    printf("String after removing space : ");
    for(i=0;i<len;i++)
    {
        if(str[i]!=' ')      //check for character not space in the string
            printf("%c",str[i]);        //print the charcter only 
    }
    return 0;
}