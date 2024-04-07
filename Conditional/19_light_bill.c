#include <stdio.h>
void main()
{
    int id;
    float unit;
    printf("Ente the id:");
    scanf("%d", &id);

    printf("Ente the units:");
    scanf("%f", &unit);

    if (unit <= 350)
    {

        printf("Total amount to be pad:%d", unit * 1.20);
    }
    else if (unit <= 600)
    {
        printf("Total amount to be pad:%d", unit * 1.50);
    }
    else if (unit <= 800)
    {
        printf("Total amount to be pad:%d", unit * 1.80);
    }

    else
    {
        printf("Total amount to be pad:%d", unit * 2.00);
    }
}