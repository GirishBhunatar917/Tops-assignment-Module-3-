#include<stdio.h>
#include<string.h>

int main()

{
    char str1[100],str2[100];
    int i;

    printf("Enter your first string :");
    scanf("%s",str1);

    printf("\norignal string :%s",str1);

    strcpy(str2,str1);

    printf("\ncopied string in second string :str2[%s]",str2);
}