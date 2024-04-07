#include <stdio.h>
void main(){
    float billamount,total;
    printf("Enter the bill amount:");
    scanf("%f",&billamount);
    if(billamount>800){
        total=billamount+(billamount*0.18);
    }
    else{
        total=billamount;
    }
    if(total<256){
        total=256;
    }
    printf("Total bill amount is:%.2f",total);
}