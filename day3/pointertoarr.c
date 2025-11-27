#include <stdio.h>
void main()
{ // 0 1 2 3 4
    int a[20] = {2, 4, 6, 8, 10};
    int *aptr = a;
    int (*arrayptr)[20] = &a;
    printf("array contains:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\naddress of array:%p\n", &a);

    printf("aptr referingto address: %p and address has:%d \n", aptr, *aptr);
    printf("array pointer contains :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", (*arrayptr)[i]);
    }
    printf(" second address of arrayptr:%d\n", (*arrayptr);
}