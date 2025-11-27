#include <stdio.h>



























int findSquareArea(int l)
{
    return l * l;
}
int findRectangleArea(int l, int b)
{
    return l * b;
}
int findCubeArea(int l, int b, int h)
{
    return l * b * h;
}
int main()
{
    printf("area of square1 is:%d\n", findSquareArea(123));
    printf("area of square2 is:%d\n", findSquareArea(200));

    printf("area of rectangle1 is:%d\n", findRectangleArea(20, 50));
    printf("area of rectangle2 is:%d\n", findRectangleArea(30, 40));

    printf("area of cube1 is:%d\n", findCubeArea(10, 20, 30));
    printf("area of cube2 is:%d\n", findCubeArea(12, 24, 36));
return 0;
}
