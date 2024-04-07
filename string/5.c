#include<stdio.h>

int main()

{
    char str1[100],str2[100];
    int i;

    printf("Enter your first string :");
    scanf("%s",str1);
    printf("Enter your second string :");
    scanf("%s",str2);

    for(i=0;str1[i]!='\0' && str2[i]!='\0';i++)
    {
        if(str1[i]>str2[i])
        {
            printf("string 1 is greater then string 2");
            return 0;
        }else if(str2[i]>str1[i])
        {
            printf("string 2 is greater then string 1");
            return 0;
        }else
        {
            printf("both strings are equal");
            return 0;
        }
    }
    
    return 0;


}