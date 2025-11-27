#include <stdio.h>
void main()
{
    int num, sum = 0, i = 0;
    printf("enter the number to find the sum ");
    scanf("%d", &num);
    while (i <= num)
    {
        sum = sum + i;
        i++;
    }
    printf("sum from 0 to %d : %d ", num, sum);
}