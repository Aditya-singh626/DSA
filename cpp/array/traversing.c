#include <stdio.h>

int main()
{
    // Name: Aditya singh
    // Roll No,:2400320100093
    int i, n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements of array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The elements of array are::");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}