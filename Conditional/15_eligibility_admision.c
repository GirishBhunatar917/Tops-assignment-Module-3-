#include <stdio.h>
void main(){
    int maths,phy,chem,total;
    printf("Emter the maths marks:");
    scanf("%d",&maths);
    printf("Emter the physics marks:");
    scanf("%d",&phy);
    printf("Emter the chemistry marks:");
    scanf("%d",&chem);
    
    if(maths>=65 && phy>=55 && chem>=50){
        total = maths + phy + chem;
        if (total >= 190 || (maths + phy >= 140) || (maths + chem >= 140)) {
            printf("Congratulations! You are eligible for admission.\n");
        } else {
            printf("Sorry, you are not eligible for admission.\n");
        }
    } else {
        printf("Sorry, you are not eligible for admission.\n");
    }
}