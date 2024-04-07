#include<stdio.h>

int main()

{
    int rev=0,rem,no,i;

    printf("Enter number:");
    scanf("%d",&no);
    printf("\norignal number\t:%d",no);

    while(no!=0)
    {
        rem=no%10;
        rev=rev*10+rem;
        no=no/10;
    }
    
    printf("\nreversed number\t:%d",rev);
}


