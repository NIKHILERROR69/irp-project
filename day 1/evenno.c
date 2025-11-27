#include <stdio.h>
void main()
{
    int a, i = 0, j = 1;
    printf("how many even numbers needed to printed :");
    scanf("%d", &a);

    printf("even number in rev order \n");
    while (a >= j)

    {
        if (a % 2 == 0)
        {
            printf("%d\n", a);
        }
        a--;
    }
}