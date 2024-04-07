#include <stdio.h>
void main(){
    int a,b,c,d;
    printf("Enter num1:");
    scanf("%d",&a);
    printf("Enter num2:");
    scanf("%d",&b);
    printf("Enter num3:");
    scanf("%d",&c);
    d=(a<b)?((a<c)?a:c):((b<c)?b:c);
    printf("%d is min number",d);


}