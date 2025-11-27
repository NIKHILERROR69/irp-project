#include<stdio.h>
void main()
{
int arr[5];
printf(" enter any 5 array elements ");
for ( int i=0; i<5; i++){
scanf("%d",&arr[i]);
}
printf(" the array elements are as follows : \n");
for(int i=0; i <5; i++){
    printf(" element %d : %d \n",i,arr[i]);

}

}








