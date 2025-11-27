#include <stdio.h>
void main()
{
    int size;
    char name[20];

    printf("Enter the number of character in your name:\n");
    scanf("%d", &size);
    printf("Enter your name:\n");

                   for (int i = 0; i < size; i++)
                   {
                      scanf("%c", &name[i]);
                   }
                    printf("Your name is:\n");
                       for (int i = 0; i < size; i++)
                          {
                         printf("%c", name[i]);
                    }
}