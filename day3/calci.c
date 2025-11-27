#include<stdio.h>
void main ()
{
int a1,a2;
char operator;
 printf("enter any number");
 scanf("%d%d",&a1,&a2);
    printf("choose the operator(+,-,*,/,%)");
    scanf(" %c" ,&operator);

       switch(operator)
       {
                 case '+':
                 printf("sum of %d & %d : %d\n",a1,a2,a1+a2);
                      break;
                 case '-':
                 printf("diff of %d & %d : %d\n",a1,a2,a1-a2);
                      break;
                 case '*':
                 printf("mul of %d & %d : %d\n",a1,a2,a1*a2);
                      break;
                 case '/':
                 printf("div of %d & %d : %d\n",a1,a2,a1/a2);
                      break;
                 case '%':
                 printf("rem of %d & %d : %d\n ",a1,a2,a1%a2);
                      break;
                 default :
                 printf("invalid choice ");
                 break;

       }



} 
