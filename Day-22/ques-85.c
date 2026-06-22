#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int flag=0, len, i;
    printf("Enter a string : ");
    scanf("%s",str);        //take input string
    len=strlen(str);        //find and store the length of the string
    for(i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-i-1])       //check for the palindrome string
        {
            flag=1;                    //if string is not palinfrome then update the flag value
            break;                     //break the loop
        }
    }
    if(flag==0)          
        printf("The String '%s' is palindrome",str);
    else
        printf("The String '%s' is not palindrome",str);
    return 0;
}