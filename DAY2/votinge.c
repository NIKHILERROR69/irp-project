#include <stdio.h>
void main()
{
    int age;
    printf("enter your age");
    scanf("%d", &age);
    if (age > 0)
    {
        if (age >= 18)
        {
            printf("you can vote for the election");
        }
        else
        {
            printf("you dont able to vote,have to grown yours physical and mentally status");
        }
    }
    else
    {
        printf("invalid age");
    }
}
