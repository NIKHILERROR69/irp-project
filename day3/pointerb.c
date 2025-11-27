#include <stdio.h>

int main(void)
{
    int i = 20;
    float f = 1.45;
    char ch = 'A';
    int *iptr;
    float *fptr;
    char *chptr;

    iptr = &i;
    fptr = &f;
    chptr = &ch;

    printf("variable value in i is %d\n", i);
    printf("variable address of i is %p\n", &i);
    printf("pointer iptr contains %p\n", iptr);
    printf("pointer value contains %d\n", *iptr);
    printf("address of pointer iptr is %p\n", &iptr);

    printf("variable value in f is %f\n", f);
    printf("variable address of f is %p\n", &f);
    printf("pointer fptr contains %p\n", *fptr);
    printf("pointer value contains %d\n", *iptr);
    printf("address of pointer fptr is %p\n", &fptr);

    printf("variable value in ch is %c\n", ch);
    printf("variable address of ch is %p\n", &ch);
    printf("pointer chptr contains %p\n", *chptr);
    printf("pointer value contains %d\n", *iptr);
    printf("address of pointer chptr is %p\n", &chptr);
    return 0;
}