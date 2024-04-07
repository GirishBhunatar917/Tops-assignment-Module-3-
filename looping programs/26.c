#include <stdio.h>

int main() {
    int n, sum = 0, temp=0,i;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) 
    {
        temp=temp+i;
        sum=temp+sum;
    }

    printf("Sum of the series: %d\n", sum);
    return 0;
}
