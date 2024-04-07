#include<stdio.h>
int main()
{
int day;

printf("Enter week number (1-7):");
scanf("%d", &day);

switch(day)
{
    case 1:
    printf("it's monday");
    break;
    case 2:
    printf("it's tuesday");
    break;
    case 3:
    printf("it's wednesday");
    break;
    case 4:
    printf("it's thursday");
    break;
    case 5:
    printf("it's friday");
    break;
    case 6:
    printf("it's saturday");
    break;
    case 7:
    printf("it's sunday");
    break;
    default :
    printf("invalid input!");
    break;
}
}