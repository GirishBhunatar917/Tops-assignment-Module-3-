#include<stdio.h>
void main(){
    char x;
    printf("Enter the character:");
    scanf("%c",&x);
    if(x>='A'&&x<='Z'){
        printf("%c is uppercase",x);
    }
    else if(x>='a'&&x<='z'){
        printf("%c is lowercase",x);
    }
    else if (x>='0'&&x<='9')
    {
         printf("%c is number",x);
    }
    else{
        printf("%c is special character",x);
    }
}