#include <stdio.h>
void main(){
    int i ,num,sum=0;
    for(i=1;i<=10;i++){
        printf("Enter %d number:",i);
        scanf("%d",&num);
        sum=sum+num;
    }
    printf("The sum of 10 numbers is:%d ",sum);

}