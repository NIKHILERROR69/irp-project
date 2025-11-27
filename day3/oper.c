#include<stdio.h>
void main()
{
    int arr[50],second=0,largest=0,smallest=0,avg=0,total=0,size;
    printf("enter num of element : ");
    scanf("%d", &size);
      printf("enter any %d element : ", size);
      for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf(" the array elements are as follows : \n");
    for (int i = 0; i < size; i++)
    {
        printf(" element %d : %d \n", i, arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        largest = arr[0];
        smallest=arr[0];
        total = total + arr[i];
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }

    }
    avg = (total) / size;
    printf(" largest element in the given array : %d\n", largest);
        printf(" smallest element in the given array : %d\n", smallest);
    printf(" total  average value from the given array : %d \n ", avg);
}
