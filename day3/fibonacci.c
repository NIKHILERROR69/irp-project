#include <stdio.h>
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
void fibonacciseries(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Prints the Fibonacci number at the given index `i` followed by a space.
        // The `fibonacci` function is expected to calculate the Fibonacci number for the input `i`.
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}
void main()
{
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    printf("Fibonacci Series at%d position:%d\n", num, fibonacci(num));
    printf("Fibonacci Series up to %d terms:\n", num);
    fibonacciseries(num);
}