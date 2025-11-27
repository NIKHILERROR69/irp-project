#include<stdio.h>
void main()
{
    int a,i=0;
    printf("how many numbers need to be printed");
    scanf("%d", &a);
    printf("numbers are as follows :\n");
        while (i <= a)
        {
         printf("%d\n",i);
        i++;
        }
}