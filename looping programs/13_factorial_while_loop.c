#include <stdio.h>
void main(){
    int i=1 ,num,fact=1;
    printf("Enter the number:");
    scanf("%d",&num);
    while (i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("The factorial is:%d",fact);
    
}   