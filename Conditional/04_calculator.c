#include<stdio.h>
void main(){
    int num1,num2 ;
    char op;
    printf("+ for additon\n");
    printf("- for subtraction\n");
    printf("/ for division\n");
    printf("* for multiplication\n");
    printf("%% for modulo\n");
    printf("*************************************\n");
    printf("Enter num1:");
    scanf("%d",&num1);
    printf("Enter operation:");
    scanf(" %c",&op);
    printf("Enter num2:");
    scanf("%d",&num2);
    printf("\n*************************************\n");
    switch (op)
    {
    case '+':
        printf("The sum of %d and %d is:%d\n",num1,num2,num1+num2);
        break;
    case '-':
        printf("The subtraction of %d and %d is:%d\n",num1,num2,num1-num2);
        break;
    case '/':
        printf("The division of %d and %d is:%d\n",num1,num2,num1/num2);
        break;
    case '*':
        printf("The multipliction of %d and %d is:%d\n",num1,num2,num1*num2);
        break;
    case '%':
        printf("The modulo of %d and %d is:%d\n",num1,num2,num1%num2);
        break;
        default:
        printf("Enter the valide operation...!");

    
  
    }
}