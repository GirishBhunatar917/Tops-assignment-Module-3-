#include <stdio.h>

void main() {
    char names[5][50]; 
    printf("Enter names of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", names[i]);
    }

    printf("\nEntered names of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: %s\n", i + 1, names[i]);
    }

}