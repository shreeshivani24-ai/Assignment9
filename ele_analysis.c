#include <stdio.h>

void findElements(int *arr, int n, int *small, int *secondSmall,
                  int *great, int *secondGreat, int *found)
{
    int i;
    int hasSecondSmall = 0;
    int hasSecondGreat = 0;

    *small = arr[0];
    *great = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] < *small)
            *small = arr[i];

        if (arr[i] > *great)
            *great = arr[i];
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] > *small)
        {
            if (!hasSecondSmall || arr[i] < *secondSmall)
            {
                *secondSmall = arr[i];
                hasSecondSmall = 1;
            }
        }

        if (arr[i] < *great)
        {
            if (!hasSecondGreat || arr[i] > *secondGreat)
            {
                *secondGreat = arr[i];
                hasSecondGreat = 1;
            }
        }
    }

    if (hasSecondSmall && hasSecondGreat)
        *found = 1;
    else
        *found = 0;
}

int main()
{
    int arr[100], n, i;
    int small, secondSmall, great, secondGreat, found;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    findElements(arr, n, &small, &secondSmall,
                 &great, &secondGreat, &found);

    if (found == 0)
    {
        printf("Fewer than two distinct values exist.\n");
    }
    else
    {
        printf("Smallest = %d\n", small);
        printf("Second smallest = %d\n", secondSmall);
        printf("Greatest = %d\n", great);
        printf("Second greatest = %d\n", secondGreat);
    }

    return 0;
}