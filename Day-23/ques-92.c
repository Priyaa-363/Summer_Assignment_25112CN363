#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], ch;
    int i, j, len, frq=0, count;
    printf("Enter a string : ");
    gets(str);         //take input of the string
    for(i=0;i<(strlen(str)-1);i++)
    {
        count=1;
        for(j=i+1;j<strlen(str);j++)
        {
            if(str[i]==str[j])        //check for the repeatation 
                count++;                //count the occurrance of character in the string
        }
        if(frq<count)                   //compare the frequency
        {
            ch=str[i];
            frq=count;
        }
    }
    printf("The maximum occurring character in the string '%s' with frequency %d : %c\n",str,frq,ch);
    return 0;
}