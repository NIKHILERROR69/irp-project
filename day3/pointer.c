#include <stdio.h>
int main(void)
{
    int i = 5;
    int *ptr;
    ptr = &i;
    printf("the value in i is %d\n", i);
    printf("the adress of i %p\n", &i);
    printf("pointer ptr contains %p\n", ptr);
    printf("pointer value contains %d\n", *ptr);
    printf("address of pointer %p\n", &ptr);
    *ptr = 10;
printf("the value in i after changing through pointer is %d\n", i);
    return 0;
}
