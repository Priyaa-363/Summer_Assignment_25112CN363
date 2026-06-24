#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], word[100], mword[100];
    int i, j=0, count=0, max=0;
    printf("Enter a string : ");
    gets(str);                 //take input of the string
    for(i=0;i<strlen(str);i++)
    {
         if(str[i]==' ')         //check for the space in the string
         {
            if(max<count)         //compare the alphabets in word
            {
                max=count;              //update 
                mword[count]='\0';       //longest word empty
                strcpy(mword,word);      //copy the longest word into mword
                word[0]='\0';           //empty the word for further process
            }
            count=0;               
            j=0;
         }
         else
         {
            count++;          //count the letters in the word
            word[j++]=str[i];        //form that word
         }
    }
    if(max<count)         //comparison for the last word
    {
        max=count;
        word[count]='\0';
        strcpy(mword,word);
    }
    printf("The longest word in the string '%s' of length %d : %s\n",str,max,mword);
    return 0;
}