#include<stdio.h>
#include<string.h>
int main()
{
    int n, i, j;
    char temp[50];
    printf("Enter number of words : ");
    scanf("%d",&n);            //take input of number of words
    char word[n][50];
    printf("Enter the words : \n");
    for(i=0;i<n;i++)
    {
        scanf("%s",&word[i]);         //take input of word
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(strlen(word[i])>strlen(word[j]))        //compare words according to length of words
            {
                strcpy(temp,word[i]);            //swaping
                strcpy(word[i],word[j]);
                strcpy(word[j],temp);
            }
        }
    }
    printf("Words sorted by length : \n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",word[i]);
    }
    return 0;
}