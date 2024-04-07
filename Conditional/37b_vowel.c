#include<stdio.h>
void main(){
    char a;
    printf("Enter the Character:");
    scanf("%c",&a);
    switch (a)
    {
    case 'a':
        printf("%c is vowel",a);
        break;
    case 'e':
        printf("%c is vowel",a);
        break;
    case 'i':
        printf("%c is vowel",a);
        break;
    case 'o':
        printf("%c is vowel",a);
        break;
    case 'u':
        printf("%c is vowel",a);
        break;
    
    default:
    printf("%c is consonant",a);
        break;
    }
}