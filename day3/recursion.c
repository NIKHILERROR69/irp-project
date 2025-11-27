#include <stdio.h>
void printnumbers(int n)

{
    if (n == 0)
        return;
    printnumbers(n - 1);
    printf("%d ", n);
}
void main()
{
    int number, number2;

    printf(" how many numbers to printed ? give any two number \n:");
    scanf("%d %d", &number, &number2);

    printnumbers(number);
    printnumbers(number2);
};

// number=5
// printnumbers(5) = > printnumbers(5-1) => printnumbers(4)nuh
// printnumbers(4) => printnumbers(4-1) => printnumbers(3)
// printnumbers(3) => printnumbers(3-1) => printnumbers(2)
// printnumbers(2) => printnumbers(2-1) => printnumbers(1)
// printnumbers(1) => printnumbers(1-1) => printnumbers(0)