#include<stdio.h>
void main()
{
 int  num=50 ;
 int *numptr= &num;
 int **dptr= &numptr;
  printf("num value:%d and it's present in :%p\n",num,&num);
  printf("numptr refers to:%p and it has value of:%d and it's present in:\n",numptr,*numptr);
  printf("dptr refers to:%p and it has value of:%p\n",dptr,*dptr);
  printf("dptr can directly acess num value:%d\n",**dptr);
}