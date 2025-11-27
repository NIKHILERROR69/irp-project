#include <stdio.h>
void main()
{
    char name[20], fullname[100], completename[100];
    printf("Enter your first name:\n");
    scanf("%s", name);
    printf("Your first name is:\n %s\n", name);

    printf("Enter your full name:\n");
    while (getchar() != '\n'); // Clear the input buffer
    fgets(fullname, sizeof(fullname), stdin);
    printf("Your full name is: \n %s", fullname);

    printf("enter your completename name again:\n");

    // fgets(array, sizeof(array), stdin);

    fgets(completename, sizeof(completename), stdin);
    printf("Your completename name is:\n %s", completename);
}