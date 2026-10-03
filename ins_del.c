#include <stdio.h>

void display(int *arr, int n)
{
    int i;

    printf("Array: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void insert(int *arr, int *n, int pos, int value)
{
    int i;

    for (i = *n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    (*n)++;
}

int delete(int *arr, int *n, int pos)
{
    int i, deleted;

    deleted = arr[pos];

    for (i = pos; i < *n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    (*n)--;

    return deleted;
}

int main()
{
    int arr[100], n, i;
    int choice, pos, value, deleted;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n1. Display\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                display(arr, n);
                break;

            case 2:
                printf("Enter position: ");
                scanf("%d", &pos);

                printf("Enter value: ");
                scanf("%d", &value);

                if (pos >= 0 && pos <= n)
                {
                    insert(arr, &n, pos, value);
                    printf("Element inserted.\n");
                }
                else
                {
                    printf("Invalid position.\n");
                }

                break;

            case 3:
                printf("Enter position: ");
                scanf("%d", &pos);

                if (pos >= 0 && pos < n)
                {
                    deleted = delete(arr, &n, pos);
                    printf("Deleted element = %d\n", deleted);
                }
                else
                {
                    printf("Invalid position.\n");
                }

                break;

            case 4:
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}