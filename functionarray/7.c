#include<stdio.h>
void main(){
    char str[100];
    int i,length=0;
    printf("Enter the String:");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++){
        length++;
    }
    printf("The Total length of %s is %d",str,length);

}