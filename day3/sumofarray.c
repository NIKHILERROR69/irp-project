#include<stdio.h>
void main()
{
    int size, arr[50],sum;
    printf(" enter the number of elements :  ");
    scanf("%d",&size);
    printf(" enter any %d elements : ", size);
    for( int i=0 ; i < size ; i++){
        scanf("%d",arr[i]);

    }

    printf(" even numder in the  :\n");
    for (int i=0; i <size ; i++){
        printf("%d\n",arr[i]);
    }
    for(int i=0 ; i<size ; i++){
        sum=sum+arr[i];
    }
    printf(" the sum of array elements : %d", sum);
}