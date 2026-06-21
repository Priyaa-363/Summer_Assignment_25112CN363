#include<stdio.h>
int main()
{
    int i=0;
    char str[100];                        // Declare a character array to hold the input string
    printf("Enter a string : ");
    gets(str);                             //take input of string from user
    while(str[i]!='\0'&&str[i]!='\n')      // Loop until null terminator or newline is found
    {
        i++;       // Increment the counter
    }
    printf("Length of the string is : %d",i);
    return 0;
}