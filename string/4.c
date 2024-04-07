#include<stdio.h>
#include<string.h>

int main()

{
    char str[100];
    int i,count=0;

    printf("Enter the string :");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if (str[i] != ' ')
        {
        count++;
        }
    }
    printf("total count of words in string is :%d",count);
}