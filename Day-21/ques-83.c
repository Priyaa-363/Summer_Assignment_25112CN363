#include<stdio.h>
int main()
{
    char str[100];
    int i=0, vow=0, cons=0;
    printf("Enter a string : ");
    gets(str);              //take input of string from user
    while(str[i]!='\0')
    {
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))    //check if character is an alphabet
        {
            if(str[i]=='A'||str[i]=='I'||str[i]=='E'||str[i]=='U'||str[i]=='O'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')          //check for vowels
                  vow++;
            else            //Remaining alphabets are consonants
                 cons++;       
        }
        i++;
    }
    printf("Number of vowels are %d\n",vow);
    printf("Number of consonants are %d\n",cons);
    return 0;
}