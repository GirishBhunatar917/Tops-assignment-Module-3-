#include <stdio.h>

int main() {
    int n;
    float sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= (float)i / (i + 1);
        } else {
            sum += (float)i / (i + 1);
        }
    }

    printf("Sum of the series: %.2f\n", sum);
    return 0;
}
