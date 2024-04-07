#include<stdio.h>

int main()

{
    int no,sum=0,rem;

    printf("Enter the number :");
    scanf("%d",&no);

    for(;no!=0;no=no/10)
    {
        rem=no%10;
        sum=sum+rem;
    }
    printf("sum of digits is :%d",sum);
}