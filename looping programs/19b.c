#include<stdio.h>

int main()

{
    char i,j,ch,g='a';

    printf("Enter character :");
    scanf("%c",&ch);

    for(i='a';i<=ch;i++)

    {
        for(j='a';j<=i;j++)
        {
            printf("%c",g++);        
        }
        printf("\n");
    }
    return 0;

}


