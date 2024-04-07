#include <stdio.h>
void main(){
    int i=1,num,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    while (i<=num)
    {
        sum=sum+i;
        i++;
    }
    printf("The sum is:%d",sum);
    
}