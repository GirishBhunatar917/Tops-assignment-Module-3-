#include <stdio.h>

int main() {
    int arr[5];
    int temp;

    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Your unreversed array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < 5 / 2; i++) {
        temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }

    printf("Reversed array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}