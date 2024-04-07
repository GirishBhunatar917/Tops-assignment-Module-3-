#include <stdio.h>
void main(){
    float height;
    printf("Enter your height in cm:");
    scanf("0.2%f",&height);

    if(150<=height<=160){
        printf("your height is normal");
    }
    else if(height>=160){
        printf("You are taller");

    }
    else{
        printf("You are short");
    }
}