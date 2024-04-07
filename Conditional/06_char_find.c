#include <stdio.h>
void main(){
    char box;
    printf("Enter the character:");
    scanf("%c",&box);
    switch (box)
    {
    case 'a':
        printf("%c is vowel",box);
        break;
    case 'e':
        printf("%c is vowel",box);
        break;
    case 'i':
        printf("%c is vowel",box);
        break;
    case 'o':
        printf("%c is vowel",box);
        break;
    case 'u':
        printf("%c is vowel",box);
        break;
    
    default:
    printf("%c is not vowel",box);
        break;
    }
}