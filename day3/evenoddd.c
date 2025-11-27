#include<stdio.h>
void main()
{
    int size, arr[50];
    printf(" even numbers in the given array :  ");
    scanf("%d",&size);
    printf("  : ", size);
    for( int i=0 ; i < size ; i++){
        scanf("%d",arr[i]);

    }

    printf(" the array elements are as follows :\n");
    for (int i=0; i <size ; i++)
    {
        printf("%d\n",arr[i]);
    }
    for(int i=0 ; i<size ; i++) 
    {

        sum=sum+arr[i];
    }
    printf(" the sum of array elements : %d", sum);
}