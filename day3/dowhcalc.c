#include <stdio.h>
void main()
{
    int operation;
    int a1, a2;
    do
    {
        printf("enter any two number");
        scanf("%d %d", a1, a2);

        printf("select any arithmetic operation:\n");
        printf("1.addition\n");
        printf("2.substraction\n");
        printf("3.multiple\n");
        printf("4.division\n");
        printf("5.reminder\n");
        printf("6.exit\n");
        scanf("%d", &operation);
    
switch(operation)
    {
    case '1':
        printf("sum of %d & %d : %d\n", a1, a2, a1 + a2);
        break;
    case '2':
        printf("diff of %d & %d : %d\n", a1, a2, a1 - a2);
        break;
    case '3':
        printf("mul of %d & %d : %d\n", a1, a2, a1 * a2);
        break;
    case '4':
        printf("div of %d & %d : %d\n", a1, a2, a1 / a2);
        break;
    case '5':
        printf("rem of %d & %d : %d\n ", a1, a2, a1 % a2);
        break;
    default:
        printf("invalid choice ");
        break;
    }
 } while (operation != 6);
        
}