#include<stdio.h>
int main()
{
    char str[100];        // Declare a character array to hold the input string
    int i, len=0;
    printf("Enter a string : ");
    gets(str);                //take input of string from user
    while(str[len]!='\0')     //to find the length of string
    {
        len++;
    }
    printf("Reversed string is "); 
    for(i=len-1;i>=0;i--)          //to print the string in reverse order
    {
        printf("%c",str[i]);
    }
    return 0;
}