#include <stdio.h>
void printevennumber(int n )
{
    if (n==-100) return;
    printevennumber(n-1);
    if (n%2==0)
    {
        printf("%d ", n);
    }
}    
void main ()
{
    int num;
    printf(" enter the number of even numbers to be printed:");
scanf("%d", &num);
    printevennumber(num);
}
    