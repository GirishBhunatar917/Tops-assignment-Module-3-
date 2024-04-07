#include<stdio.h>

int main()

{
    char str[1000];
    int i;

    printf("Enter the string :");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    printf("\n string after convert in lower to uper and uper to lower:%s",str);
}