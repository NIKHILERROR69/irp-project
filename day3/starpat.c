#include <stdio.h>
void main()
{
    int rows,i;

    printf("enter the number of rows");
    scanf("%d",&rows);
    printf("square pattern:\n");
        for(int i = 1; i <= rows; i++)
        {
            for(int j=1;j<= rows ; j++ ){
                printf("%d ,j");
            }
            printf("\n");
        }



}
