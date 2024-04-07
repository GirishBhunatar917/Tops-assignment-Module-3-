#include<stdio.h>

int main()
{
    int no,rem,sum=0,digit;

    printf("Enter the number :");
    scanf("%d",&no);

    digit=no;

    for(;no!=0;no=no/10)
    {
        rem=no%10;
        sum=sum+(rem*rem*rem);
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
