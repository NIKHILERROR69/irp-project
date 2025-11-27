#include<stdio.h>
void main()
{
  int choice;
   
 
        do 
        {
  printf("choose any of the option:\n");
  printf("1.welcome\n");
  printf("2.good morning\n");
  printf("3.good evening\n");
  printf("4.good night\n");
  printf("5.good bye\n");
  scanf("%d",&choice);

            switch(choice)
        {
         case 1:
         printf("welcome to c program IRP\n");
         break;
         case 2:
         printf("good morning students IRP\n");
         break;
         case 3:
         printf("good evening students IRP\n");
         break;
         case 4:
         printf("good night students IRP\n");
         break;
         case 5:
         printf("good byeeeeeee IRP\n");
         break;
         default:
         printf("are you drunked");
         break; 
        }
        }while(choice=5);
}