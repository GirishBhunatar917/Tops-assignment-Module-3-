#include<stdio.h>

int main()

{
    char str[100];
    int length=0,i;

    printf("Enter the string :");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
    printf("length of the string is : %d",length);

    return 0;
}