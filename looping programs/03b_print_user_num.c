#include <stdio.h>
void main(){
    int i ,num;
    for(i=1;i<=10;i++)
    {
        printf("Enter the number:");
        scanf("%d",&num);

        if(num%2!=0){
            printf("%d is \n",num);
        }

    }

}