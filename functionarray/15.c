#include <stdio.h>
void main()
{
    int n, i, j, temp;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the Number %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Before sorting\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
               temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }
          
        }
    }
    printf("After sorting\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}