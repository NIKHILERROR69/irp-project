#include<stdio.h>
void myCollege()
{
    printf("city enngineering college\n");
}

void myBranch(char Branch[20])
{
    printf("im studying in %s branch!\n",Branch);
}
void welcome(char fname[20],char lname[20])
{
    printf("hi %s %s ,welcome to CEC!\n",fname, lname);
}
void sum(int a,int b)
{
    printf("sum of %d and %d:%d\n", a,b ,a+b);
}
void main()
{
    myCollege();
    myBranch("Computer Science");
    myBranch("AIML");
    myBranch("Mechanical");
    welcome("nikhil","kumar");
    sum(10,20);
}
