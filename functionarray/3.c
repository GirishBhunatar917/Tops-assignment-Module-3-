#include <stdio.h>

// Function to calculate the length of the string
int length(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Function to reverse the string
void reverseString(char str[]) {
    int len = length(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Original string: %s\n", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
