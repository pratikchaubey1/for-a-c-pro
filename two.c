#include <stdio.h>

int main()
{
    int n;

    printf("Enter the array size: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nArray values are:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}