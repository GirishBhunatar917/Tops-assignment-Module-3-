#include<stdio.h>

int main()

{
    int i,j,num;

    printf("Enter number :");
    scanf("%d",&num);

    for(i=1;i<=num;i++)

    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
            
        }
        printf("\n");
    }
    return 0;

}