#include <stdio.h>
void main(){
    float a1,a2,a3;
    printf("Enter the length of angle1: ");
    scanf("%f",&a1);
    printf("Enter the length of angle2: ");
    scanf("%f",&a2);
    printf("Enter the length of angle3: ");
    scanf("%f",&a3);
    if(a1+a2+a3 ==180){
        printf("Triangle can be formed");
    }
    else{
        printf("Triangle can not be formed");
    }
}