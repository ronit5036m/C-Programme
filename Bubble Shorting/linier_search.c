#include <stdio.h>
int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10, 23, 45, 70, 5, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Enter the number to search: ");
    scanf("%d", &target);
    int result = linearSearch(arr, size, target);
    if (result != -1)
    {
        printf("Element found at index %d.\n", result);
    }
    else
    {
        printf("Element not found in the array.\n");
    }
    return 0;
}