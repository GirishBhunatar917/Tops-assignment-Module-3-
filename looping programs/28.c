#include <stdio.h>

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int term = 1;
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", term);
        if (i % 2 == 0) 
        {
            term=term*2;
        } else 
        {
            term=term*3;
        }
    }

    return 0;
}
