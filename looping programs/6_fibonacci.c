#include<stdio.h>

int main()

{
    int first=0,second=1,third,n,i;

    printf("Enter your number:");
    scanf("%d",&n);
         printf("%d\t",first);


    for(i=1;i<=n;i++)
    {
        first=second;
        second=third;
        third=first+second;
        printf("%d\t",third);
    }
   
        
    return 0;


}