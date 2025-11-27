#include<stdio.h>
void main()
{ 
    int num;
    float decimal;
    char symbol;
    printf("enter any integer value\n");
scanf("%d",&num);

printf("enter any decimal value\n");
scanf("%f",&decimal);
printf("enter any symbol:\n");
scanf(" %c",&symbol);
printf("you are given %d for integer,%f for float ,%c for symbol ",num,decimal,symbol);



}