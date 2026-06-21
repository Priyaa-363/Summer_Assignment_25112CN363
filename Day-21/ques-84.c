#include<stdio.h>
int main()
{
    char str[100];
    int i=0;
    printf("Enter a string : ");
    gets(str);         // take input of string from the user
    while(str[i]!=0)
    {
        if(str[i]>='a'&&str[i]<='z')      //check if the character is lowercase
        {
            str[i]=str[i]-32;       //convert lowercase to uppercase
        }
        i++;
    }
    printf("Uppercase string is %s\n",str);
    return 0;
}