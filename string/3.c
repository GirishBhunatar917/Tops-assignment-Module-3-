#include<stdio.h>
#include<string.h>

int main()

{
    char str[100];

    printf("Enter the string :");
    scanf("%s",str);
    printf("string after reversing :%s",strrev(str));

    return 0;

}