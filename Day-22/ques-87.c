#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], ch;
    int count=0, i, len;
    printf("Enter a string : ");
    gets(str);                //take input string
    printf("Enter a character : ");
    scanf("%c",&ch);          //take input character
    len=strlen(str);          //find and store the length of the string
    for(i=0;i<len;i++)
    {
        if(str[i]==ch)       //check for the character in the string 
             count++;          //update the count by 1
    }
    printf("The Frequency of '%c' in the String '%s' is %d",ch,str,count);
    return 0;
}