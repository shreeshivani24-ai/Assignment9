#include <stdio.h>

void calculate(int a, int b, int *sum, int *diff, int *pro, float *quo)
{
    *sum = a + b;
    *diff = a - b;
    *pro = a * b;

    if (b != 0)
        *quo = (float)a / b;
}

int main()
{
    int a, b, sum, difference, product;
    float quotient = 0.0;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    calculate(a, b, &sum, &difference, &product, &quotient);

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);

    if (b != 0)
        printf("Quotient = %.2f\n", quotient);
    else
        printf("Division by zero is not possible.\n");

    return 0;
}