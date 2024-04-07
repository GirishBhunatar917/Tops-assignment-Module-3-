#include<stdio.h>

int main()
{
    char str[100];
    int i,vowel=0,cons=0;

    printf("Enter the string :");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            vowel++;
        }else
        {
            cons++;
        }

    }
    printf("\ntotal vowels in string are :%d",vowel);
    printf("\ntotal cons in string are :%d",cons);
}