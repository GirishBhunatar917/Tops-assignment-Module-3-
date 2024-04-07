#include <stdio.h>
void main(){
    int i ,num,sum=0;
    for(i=1;i<=10;i++)
    {
        printf("Enter the number:");
        scanf("%d",&num);
        if(num%2==0){
            sum=sum+num;
        }
    }

printf("The sum of even number is: %d",sum);

}