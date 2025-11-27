#include<stdio.h>
void main()
{
int number;
char c;
    printf("enter any number:");
    scanf("%dand %c",&number,&c);
    if (number>0)
    {
        printf("%d is a positive number!",number);

    }
else if (number<0)

   { printf("%d is a negative number\n");
    }
else(char c)
 {
    printf( "%d is not a number\n",c);
}  
return();
}