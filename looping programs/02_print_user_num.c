#include<stdio.h>
int main(){
    int i ,num;
    for (i = 1; i<=5; i++)
    {
        printf("Enter %d number:",i);
        scanf("%d",&num);
        printf("The number is:%d\n",num);
    }
    
    return 0;
}