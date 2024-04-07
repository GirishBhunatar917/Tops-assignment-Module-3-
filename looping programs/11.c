#include <stdio.h>

int main() {
    char str[5][100]; 
    int i;

    printf("Enter five names:\n");
    for (i = 0; i < 5; i++) {
        printf("Name %d: ", i + 1);
        scanf("%s", str[i]);
    }

    printf("\nEntered names:\n");
    for (i = 0; i < 5; i++) {
        printf("Name[%d]: %s\n", i, str[i]);
    }

    return 0;
}
