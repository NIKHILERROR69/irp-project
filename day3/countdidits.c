#include<stdio.h>
void main()
{
    int a,count =0;
    printf("enter any number ");
    scanf("%d",&a);
    printf("enter a number ", a );
    while ( a>=0) 
    {
          if (a==0)
          {
            count=1 ;
          }
          while (a>0)
          {
            count++;
            a=a/10;
          }
          printf("number of digits counted %d ",count);
    }
}
//tracing
//num =123, count=0
//