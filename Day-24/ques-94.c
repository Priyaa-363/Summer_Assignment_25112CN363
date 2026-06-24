#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, count;
    printf("Enter a string : ");
    gets(str);         //take input of the string
    printf("Compressed String : ");
    for(i=0;i<strlen(str);i++)
    {
        count=1;
        while(str[i]==str[i+1])         //check for the repeatation
        {
            count++;                    //update the count by one
            i++;
        }
        printf("%c%d",str[i],count);
    }
    return 0;
}