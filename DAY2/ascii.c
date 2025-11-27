#include<stdio.h>
 void main()
{
    char ch;
    char start,end;
    printf("enter starting character:");
    scanf(" %c",&start);
    printf("enter the ending character:");
    scanf(" %c",&end);
    printf(" charactwers from %c to %c :\n",start,end);
for (ch=start;ch<=end;ch++)
{
    printf("%c \t %d \n",ch,ch);
    
}}


