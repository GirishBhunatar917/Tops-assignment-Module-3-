#include<stdio.h>

int main() {
    int a, b, c, sum, total = 35;
    printf("Enter the sub1 marks: ");
    scanf("%d", &a);
    printf("Enter the sub2 marks: ");
    scanf("%d", &b);
    printf("Enter the sub3 marks: ");
    scanf("%d", &c);
    sum = a + b + c;
    if(sum >= total) {
        printf("%d You passed.\n", sum);
    } else {
        printf("%d You failed.\n", sum);
    }
    return 0;
}
