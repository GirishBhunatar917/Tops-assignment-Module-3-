#include<stdio.h>

int main()

{
    int no,rem,max=0;

    printf("Enter the number :");
    scanf("%d",&no);

    for(;no!=0;no=no/10)
    {
        rem=no%10;
        if(rem>max)
        {
            max=rem;
        }
    }
    printf("maximum digit :%d",max);
}