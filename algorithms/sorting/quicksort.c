#include <stdio.h>

int quickSort(int arr[], int low, int high)
{
    int pivot, i, j, temp;

    if (low < high)
    {
        pivot = arr[high];
        i = low - 1;

        for (j = low; j < high; j++)
        {
            if (arr[j] < pivot)
            {
                i++;

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        pivot = i + 1;

        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }

    return 0;
}

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}