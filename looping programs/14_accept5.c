#include<stdio.h>

int main()
{
    int i,number;
    for(i=1;i<=5;i++){
        printf("\nEnter %d number :",i);
        scanf("%d",&number);
        printf("\nyou entered %d",number);
    }
    
    return 0;
}