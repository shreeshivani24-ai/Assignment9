#include <stdio.h>

void evenOdd(int n)
{
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}

void positiveNegative(int n)
{
    if (n > 0)
        printf("Positive\n");
    else if (n < 0)
        printf("Negative\n");
    else
        printf("Zero\n");
}

void prime(int n)
{
    int i, flag = 1;

    if (n < 2)
        flag = 0;

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Prime\n");
    else
        printf("Not Prime\n");
}

void perfect(int n)
{
    int i, sum = 0;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n && n > 0)
        printf("Perfect\n");
    else
        printf("Not Perfect\n");
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nClassification:\n");

    evenOdd(n);
    positiveNegative(n);
    prime(n);
    perfect(n);

    return 0;
}