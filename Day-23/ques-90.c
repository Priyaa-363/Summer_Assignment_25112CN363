#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, j, flag=0, len;
    printf("Enter a String : ");
    gets(str);               //take input of string
    len=strlen(str);         //find and store the length of the string
    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(str[i]==str[j])       //check for the repeatation
            {
                printf("The First repeating character in the string '%s' : %c\n",str,str[i]);
                flag=1;
                break;
            }
        }
        if(flag==1)
              break;
    }
    if(flag==0)
         printf("Repeating character is not present in the string\n");
    return 0;
}