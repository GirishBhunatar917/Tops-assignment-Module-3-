#include<stdio.h>

int main()
{
    char str[100];
    int max=0,i;

    printf("Enter your string :");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++)
    {
        max++;
    }
    printf("Maximum characters in string is :%d",max);
}