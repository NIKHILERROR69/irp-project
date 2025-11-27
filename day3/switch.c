#include <stdio.h>
void main()
{

    int month;
    printf("enter any number between 1 to 12 :");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
        printf("month1 : janauary");
        break;
    case 2:
        printf(" month 2 : febrauary ");
        break;
    case 3:
        printf(" month3 :march");
        break;
    case 4:
        printf(" month4 :april");
        break;
    case 5:
        printf(" month5 :may");
        break;
    case 6:
        printf(" month6 :june ");
        break;
    case 7:
        printf(" month7 :july");
        break;
    case 8:
        printf(" month8 :august");
        break;
    case 9:
        printf(" month9 :september");
        break;
    case 10:
        printf(" month10 :october");
        break;
    case 11:
        printf(" month11 :november");
        break;
    case 12:
        printf(" month12 :december");
        break;

    default:
        printf("invalid choice ");

        break;
    }
}
