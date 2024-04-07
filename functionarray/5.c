#include <stdio.h>

int main() 
{
    int n, i, j, temp;
    char ch;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    for (i = 0; i < n; i++) 
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Before sorting\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d\t", arr[i]);
    }
    
    printf("\nEnter the sorting order. Choose \"A\" for ascending and \"D\" for descending: ");
    scanf(" %c", &ch);
    
    if (ch == 'A') 
    {
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j]) 
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    else if (ch == 'D') 
    {
        for (i = 0; i < n - 1; i++) 
        {
            for (j = i + 1; j < n; j++) 
            {
                if (arr[i] < arr[j]) 
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    else 
    {
        printf("Invalid sorting order choice.");
        return 1;
    }
    
    printf("After sorting\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d\t", arr[i]);
    }
    
    return 0;
}
