#include <stdio.h>
int main(){
    int a,b;
    printf("Enter num1:");
    scanf("%d",&a);
    printf("Enter num2:");
    scanf("%d",&b);
    if(a==b){
        printf("Both number is equal");
    }
    else{
        printf("numbers are not equal");
    }
    return 0;
}