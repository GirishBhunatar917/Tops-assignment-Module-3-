#include <stdio.h>

int main() {
    int month;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Invalid month number!\n");
    } else {
        switch(month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                printf("Number of days in month %d: 31\n", month);
                break;
            case 4: case 6: case 9: case 11:
                printf("Number of days in month %d: 30\n", month);
                break;
            case 2:
                printf("Number of days in month %d: 28 or 29\n", month);
                break;
        }
    }

    return 0;
}
