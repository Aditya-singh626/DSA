#include <stdio.h>
void reversal(int arr[], int n)
{
    int i, temp[100];
    for (i = 0; i < n ; i++)
    {
        temp[i] = arr[n-1-i];
    }
    printf("The elements of array after reversal are::");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", temp[i]);
    }
}
int main()
{
    // Name: Aditya singh
    // Roll No,:2400320100093
    int arr[100], i, n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    printf("Enter the elements of array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    reversal(arr, n); // function call
    return 0;
}