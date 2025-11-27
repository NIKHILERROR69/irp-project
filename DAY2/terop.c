#include<stdio.h>
void main()
{
int num1,num2,num3;

           printf("enter any two numbers");
           scanf("%d%d%d",&num1,&num2,&num3);

(num1 %2 == 0)
          ?printf("%d is an even number", num1)
          :printf("%d is an odd number", num1);

(num1>num2)
?(num1>num3)
         ?printf("%d is greater than %d",num1)
         :printf("%d is lesser than %d",num3)
  
  :(num1>num3)
           ?printf("%d (num1) is greater than other numbers ",num2)
           :printf("%d (num2) lesser than other numbers ",num3);
}