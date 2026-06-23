#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, j, len, flag;
    printf("Enter a String : ");
    gets(str);         //take input of the string
    len=strlen(str);     //find and store the length of the string
    for(i=0;i<len;i++)
    {
        flag=0;          //initialize the flag value with 0
        for(j=0;j<len;j++)
        {
            if(i!=j&&str[i]==str[j])      //check for repeatation of character in the string
            {
                flag=1;             //update the value of flag for repeatation
                break;
            }
        }
        if(flag==0)               //if flag value is equal to the zero then it is non-repeating character
        {
            printf("The first non-repeating character in the string '%s' : %c\n",str,str[i]);
            break;
        }
    }
    if(flag==1)            
         printf("Non-repeating character is not present in the string\n");
    return 0;
}