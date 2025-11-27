#include<stdio.h>
void main()
{
int marks;
printf("enter your marks");
   scanf("%d", &marks);
   
   if(marks>35 && marks<60)
{
    printf("you have passed in the exam ");

}
else if(marks>=70 && marks<85)
{
    printf("you have got A GRADE");
}
else if(marks>85 && marks<=100 )
{
    printf("you have got distincation");
}
else if(marks>100)
{
    printf("invalid marks");
}
else
{
    printf("you are failed");
}
}