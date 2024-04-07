#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end)
{
    char temp;
    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int isPalindrome(char str[])
{
    int length = strlen(str);
    int i;

    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int len;
    char str[100];
    printf("Enter the string you want to reverse it: ");
    fgets(str, sizeof str, stdin);
    printf("Before Reverse\n");
    printf("%s", str);
    len = strlen(str);
    reverse(str, 0, len - 1);
    printf("After reverse\n");
    printf("%s", str);

    if (isPalindrome(str))
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}