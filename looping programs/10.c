#include<stdio.h>

int main()

{
    int no,sum=0,rem,count=0;

    printf("Enter the number:");
    scanf("%d",&no);

    while(no!=0)
    {
        rem=no%10;
        if(count==0||no<10)
        {
            sum=sum+rem;
        }
        count++;
        no=no/10;
    }
    printf("sum of first and last digit is :%d",sum);
}