#include<stdio.h>
void main(){
    int transaction;
    printf("enter the transaction amount:");
    scanf("%d",&transaction);
    if(transaction>50000){
        printf("You are in loss");
    }
    else{
        printf("You are in profit");
    }
}