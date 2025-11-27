#include<stdio.h>
void main()
{
int arr[50],size;
printf(" enter any 5 array elements ");
scanf("%d",&size);
for ( int i=0; i<size; i++){
scanf("%d",&arr[i]);
}
printf(" the array elements are as follows : \n");
for(int i=0; i <size; i++){
    printf(" element %d : %d \n",i,arr[i]);

}

}