#include <stdio.h>

int sumDigits(int n)
{
    int sum = 0;

    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }

    return sum;
}

int countDigits(int n)
{
    int count = 0;

    if (n == 0)
        return 1;

    while (n != 0)
    {
        count++;
        n = n / 10;
    }

    return count;
}

int reverseNumber(int n)
{
    int rev = 0;

    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    return rev;
}

int main()
{
    int n, sum, count, reverse;

    printf("Enter an integer: ");
    scanf("%d", &n);

    sum = sumDigits(n);
    count = countDigits(n);
    reverse = reverseNumber(n);

    printf("Sum of digits = %d\n", sum);
    printf("Number of digits = %d\n", count);
    printf("Reverse = %d\n", reverse);

    if (n == reverse)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}