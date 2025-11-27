#include<stdio.h>
void main()
{
    long int num,sum=0;
    printf("enter any number");
    scanf("%ld",&num);
    while(num>0)
    {
                sum = sum+num%10 ;
                num=num/10;
        

    }
    printf(" sum of the given digits is %ld",sum);
    
}