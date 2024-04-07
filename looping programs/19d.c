#include<stdio.h>

int main()

{
    int i,j,num,g=1;

    printf("Enter number :");
    scanf("%d",&num);

    for(i=1;i<=num;i++)

    {
        for(j=1;j<=i;j++)
        {
            printf("%d",g++);
        }
        printf("\n");
    }
    return 0;

}