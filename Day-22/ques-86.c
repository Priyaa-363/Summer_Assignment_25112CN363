#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int count=1, i, len;
    printf("Enter a string : ");
    gets(str);                //take input string
    len=strlen(str);          //find and store the length of the string
    for(i=0;i<len;i++)
    {
        if(str[i]==' '&&str[i+1]!=' ')        //check for the space and next should a character 
             count++;          //update the count by 1
    }
    printf("The string '%s' has %d words",str,count);
    return 0;
}