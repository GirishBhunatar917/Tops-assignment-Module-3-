#include<stdio.h>

int main()
{
    int no,rem,sum=0,digit;

    printf("Enter the number :");
    scanf("%d",&no);

    digit=no;

    while(no!=0)
    {
        rem=no%10;
        sum=sum+(rem*rem*rem);
        no=no/10;
    }
    if(digit==sum)
    {
        printf("\narmstrong number");
    }
    else
    {
        printf("\nnot armstrong number");
    }
}
